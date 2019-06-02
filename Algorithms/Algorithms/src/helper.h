#pragma once
#include <iostream>
using std::cout;
using std::endl;

void test(int* x, int len)
{
	for (int i = 0; i < len; ++i)
		cout << x[i] << " ";
	cout << endl;
}

