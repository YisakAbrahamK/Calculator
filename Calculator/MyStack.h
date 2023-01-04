#pragma once
template<class T>
class MyStack {
private:
	int t;
	T* s;
	int n = 100;
public:
	MyStack();
	void push(T x);
	T pop();
	bool full();
	bool empty();
	T top();
};
