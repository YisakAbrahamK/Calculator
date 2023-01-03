#include "PostfixEvaluator.h"
#include <stack>
#include <cmath>

double Evapost::Evaluate(string s)
{
	stack<double> st;
	for(int i = 0;i < s.length();i++) {
		double temp = 0, p = 1;
		if (s[i] >= '0' && s[i] <= '9') {
			bool afterdecimal=false;
			stack<double> stemp;
			while (s[i] != '|') {
				if (s[i] == '.') {
					while (!stemp.empty()) {
						temp += p * stemp.top();
						stemp.pop();
						p = p * 10;
					}
					afterdecimal = true;
					p = 1 / 10.00;
				}
				else {
					if (afterdecimal == true) {
						temp += (s[i] - '0') * p;
						p = p / 10;
					}
					else {
						stemp.push(s[i] - '0');
					}
				}
				i++;
			}
			while (!stemp.empty()) {
				temp += p * stemp.top();
				stemp.pop();
				p = p * 10;
			}
			st.push(temp);
			p = 1;
		}
		else {
			if (s[i] == '|') {
				continue;
			}
			else {

				if (s[i] == 's') {
					double first = st.top();
					st.pop();
					st.push(sin(first));
					continue;
				}
				else if(s[i] == 'c') {
					double first = st.top();
					st.pop();
					st.push(cos(first));
					continue;
				}
				else if (s[i] == 't') {
					double first = st.top();
					st.pop();
					st.push(tan(first));
					continue;
				}
				else if (s[i] == '√') {
					double first = st.top();
					st.pop();
					st.push(sqrt(first));
					continue;
					
				}

				double second = st.top();
				st.pop();
				double first = st.top();
				st.pop();
				switch (s[i])
				{
					case '^':
						st.push(pow(first, second));
						break;
					case '+':
						st.push(first + second);
						break;
					case '-':
						st.push(first - second);
						break;
					case '*':
						st.push(first * second);
						break;
					case '/':
						st.push(first / second);
						break;
					default:
						break;
				}
			}

		}
	}

	return st.top();
}
