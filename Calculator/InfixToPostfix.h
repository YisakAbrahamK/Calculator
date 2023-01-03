#include <string>

#pragma once

using namespace std;

class Mystack {
private:
	int top;
	char* s;
	int n = 1000;
public:
	Mystack();
	void push(int x);
	bool isFull();
};

class infixToPost {
public:
	static string toPost(string s);
	static int prec(char c);
};
