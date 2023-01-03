#include <string>
#include <stack>
#include "InfixToPostfix.h"

using namespace System::Windows::Forms;

Mystack::Mystack() {
	s = new char[n];
	top = 999;
};

string infixToPost::toPost(string s)
{
    stack<char> st; 
    string result;

    for (int i = 0; i < s.length(); i++) {
        char c = s[i];

        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
            || (c >= '0' && c <= '9') || c=='.') {
            if (c == 'l') {
                st.push('l');
                continue;
            }else if (c == 's') {
                st.push('s');
                i = i + 2;
                continue;
            }
            else if (c == 'c') {
                st.push('c');
                i = i + 2;
                continue;
            }
            else if (c == 't') {
                st.push('t');
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
            while (!st.empty()
                && prec(s[i]) <= prec(st.top())) {
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
    if (c == 's'||c=='t'||c=='c')
        return 4;
    else if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}