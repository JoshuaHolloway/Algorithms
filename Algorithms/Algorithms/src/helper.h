#pragma once
#include <iostream>
using std::cout;
using std::endl;
//---------------------------------------------------------
void test(int* x, int len)
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
//---------------------------------------------------------
void bubble_sort(int* x, int len)
{
	for (int i = 0; i < len - 1; ++i)
	{
		// compare current value and neighbor
		if (x[i] > x[i + 1])
			swap(x[i], x[i + 1]);
	}
}