#define _USE_MATH_DEFINES
#include <cmath>
#include "PostfixEvaluator.h"
#include "MyStack.cpp"


double Evapost::Evaluate(string s,bool degree)
{
	MyStack<double> st;
	for(int i = 0;i < s.length();i++) {
		double temp = 0, p = 1;
		if (s[i] >= '0' && s[i] <= '9') {
			bool afterdecimal=false;
			MyStack<double> stemp;
			while (s[i] != '|') {
				if (s[i] == '.') {
					while (!stemp.empty()) {
						temp += p * stemp.pop();
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
				temp += p * stemp.pop();
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
				if (s[i] == 'E') {
					double first = st.pop();
					st.push(log(first)/log(M_E));
					continue;
				}
				if (s[i] == 'n') {
					double first = st.pop();
					st.push(first*(-1));
					continue;
				}
				if (s[i] == 'L') {
					double first = st.pop();
					st.push(log10(first));
					continue;
				}
				if (s[i] == 'l') {
					double first = st.pop();
					st.push(log2(first));
					continue;
				}
				if (s[i] == 's') {
					double first = st.pop();
					if (degree == true) {
						first = (first * M_PI) / 180;
					}
					st.push(sin(first));
					continue;
				}
				else if(s[i] == 'c') {
					double first = st.pop();
					if (degree == true) {
						first = (first * M_PI) / 180;
					}
					st.push(cos(first));
					continue;
				}
				else if (s[i] == 't') {
					double first = st.pop();
					if (degree == true) {
						first = (first * M_PI) / 180;
					}
					st.push(tan(first));
					continue;
				}
				else if (s[i] == 'r') {
					double first = st.pop();
					st.push(sqrt(first));
					continue;
				}

				double second = st.pop();
				double first = st.pop();
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

	return st.pop();
}
