#include <string>
#include "MyStack.cpp"
#include "InfixToPostfix.h"

using namespace System::Windows::Forms;

string infixToPost::toPost(string s)
{
    MyStack<char> st; 
    string result;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9') || c=='.') {
            if (c == 'l'&&s[i+3]=='1') {
                st.push('L'); //log10
                i = i + 4;
                continue;
            }
            else if ((c == 'l' && s[i + 1] == 'n')) {
                st.push('E'); //sibolize ln
                i++;
                continue;
            }
            else if (c == 'l') {
                st.push('l'); //log2
                i = i + 3;
                continue;
            }
            else if (c == 's' && s[i+3]=='t') {
                st.push('r'); //sqrt
                i = i + 3;
                continue;
            }
            else if (c == 's') {
                st.push('s');//sin
                i = i + 2;
                continue;
            }
            else if (c == 'c') {
                st.push('c');//cos
                i = i + 2;
                continue;
            }
            else if (c == 't') {
                st.push('t');//tan
                i = i + 2;
                continue;
            }

            result += c;
            if (s[i + 1] < '0' || s[i + 1] > '9') {
                if (s[i+1] != '.') {
                    result += '|';
                }                
            }
        }

        else if (c == '(') {
            st.push('(');

        }
            
        else if (c == ')') {
            while (st.top() != '(') {
                result += st.top();
                result += '|';
                st.pop();
            }
            st.pop();
        }
        else if (s[i]==' ') {
            continue;
        }

        else{
            if (s[i] == '-') {
                if (i != 0) {
                    if ((s[i - 1] < '0' || s[i - 1]>'9') || s[i - 1] == '(') {
                        st.push('n');
                        continue;
                    }
                }
                else {
                    st.push('n'); //if '-' cames at the begining.
                    continue;
                }
            }
            while (!st.empty()
                && prec(c) <= prec(st.top())) {
                result += st.top();
                result += '|';
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty()) {
        result += st.top();
        result += '|';
        st.pop();
    }
    return result;
}

int infixToPost::prec(char c)
{
    if (c == 'n')
        return 5;
    else if (c == 's'||c=='t'||c=='c'||c=='l'||c=='L'||c=='E')
        return 4;
    else if (c == '^'||c=='r')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}