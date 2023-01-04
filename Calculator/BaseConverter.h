#pragma once
#include <string>
using namespace std;

ref class BaseConverter
{
public:
	string convert(string givenNum, int givenBase, int requiredBase);
	int otherToDecimal(string num, int base);
	string decimalToOther(int decimal, int base);
	int charValue(char c);
	char intchar(int value);
};

