#include "Utilitie.h"
#include <stack>
bool Utilite::areBracketsBalanced(string expr)
{
	stack<char> st;
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
bool Utilite::doubleDotChecker(string expr)
{
	//while()
	return false;
}