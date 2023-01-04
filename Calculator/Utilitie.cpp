#include "Utilitie.h"
#include "MyStack.cpp"
bool Utilite::areBracketsBalanced(string expr)
{
	MyStack<char> st;
	for (int i = 0; i < expr.length();i++) {
		if (expr[i] == '(') {
			st.push('(');
		}
		else if(expr[i] == ')') {
			if (st.empty()) {
				return false;
			}
			st.pop();
		}
	}
	if (st.empty()) {
		return true;
	}
	else {
		return false;
	}

}


