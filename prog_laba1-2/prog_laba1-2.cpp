// prog_laba1-2.cpp: определяет точку входа для консольного приложения.
//
#include "stdafx.h"
#include <stdio.h>
#include <iostream>
#include <limits>
using namespace std;

int main()
{
	int i;
	cout << "For this compiler: " << endl;
	cout << "integers are " << sizeof(int) << " bytes" << endl;
	cout << "largest integer is " << INT_MAX << endl;
	cout << "smallest integer is " << INT_MIN << endl;
	cout << "integers__64 are " << sizeof(__int64) << " bytes" << endl;
	cout << "largest integer is " << _I64_MAX << endl;
	cout << "smallest integer is " << _I64_MIN << endl;
	cout << "Input an integer value " << endl;
	cin >> i;
	cout << endl << "You entered the following value: " << endl;
	cout << "integer: " << i << endl;
	cout << "Integer Overflow: " << INT_MAX + 1 << endl;
	return 0;
}