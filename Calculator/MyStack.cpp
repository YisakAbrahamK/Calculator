#include "MyStack.h"

template<class T>
MyStack<T>::MyStack()
{
	t = -1;
	s = new T[n];
};

template<class T>
void MyStack<T>::push(T x)
{
	if (!full()) {
		t++;
		s[t] = x;
	}
};

template<class T>
T MyStack<T>::pop()
{
	T temp = -1;
	if (!empty()) {
		temp = s[t];
		t--;
	}
	return temp;
}
template<class T>
bool MyStack<T>::full()
{
	return t == n - 1;
}
template<class T>
bool MyStack<T>::empty()
{
	return t==-1;
}

template<class T>
T MyStack<T>::top()
{
	T temp = -1;
	if (!empty()) {
		temp = s[t];
	}
	return temp;
}
;
