#include <string>

#pragma once

using namespace std;

class infixToPost {
public:
	static string toPost(string s);
	static int prec(char c);
};
