#include "BaseConverter.h"
#include "MyStack.cpp"

int BaseConverter::otherToDecimal(string num, int base)
{
	int power = num.length() - 1;
	int result = 0;
	for (int i = 0;i < num.length();i++) {
		result += charValue(num[i]) * pow(base, power);
		power--;
	}
	return result;
}

string BaseConverter::decimalToOther(int decimal, int base)
{
	MyStack<char> s;
	while (decimal > 0) {
		int reminder = decimal % base;
		s.push(intchar(reminder));
		decimal = decimal / base;
	}
	string temp;
	while (!s.empty()) {
		temp += s.pop();
	}
	return temp;
}

int BaseConverter::charValue(char c)
{
	switch (c)
	{
	case 'A':
		return 10;
	case 'B':
		return 11;
	case 'C':
		return 12;
	case 'D':
		return 13;
	case 'E':
		return 14;
	case 'F':
		return 15;
	default:
		return c - '0';
	}
}

char BaseConverter::intchar(int value)
{
	if (value >= 0 && value <= 9) {
		return value + '0';
	}
	else {
		switch (value)
		{
		case 10:
			return 'A';
		case 11:
			return 'B';
		case 12:
			return 'C';
		case 13:
			return 'D';
		case 14:
			return 'E';
		case 15:
			return 'F';
		}
	}
}

string BaseConverter::convert(string givenNum, int givenBase, int requiredBase)
{
	string requiredNum;
	if (givenBase == 10) {
		requiredNum = decimalToOther(stoi(givenNum), requiredBase);
		return requiredNum;
	}
	int decimal = otherToDecimal(givenNum, givenBase);
	if (requiredBase == 10) {
		return to_string(decimal);
	}
	requiredNum = decimalToOther(decimal, requiredBase);
	return requiredNum;
}

