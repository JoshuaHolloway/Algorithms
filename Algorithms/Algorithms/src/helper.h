#pragma once
#include <iostream>
using std::cout;
using std::endl;
//---------------------------------------------------------
void print(int* x, int len)
{
	for (int i = 0; i < len; ++i)
		cout << x[i] << " ";
	cout << endl;
}
//---------------------------------------------------------
void swap(int& x, int& y)
{
	int temp = x;
	x = y;
	y = temp;
}