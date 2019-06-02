#pragma once
#include "helper.h"
namespace Bub_Sort
{
	//---------------------------------------------------------
	void bubble_sort(int* x, int len)
	{
		for (int i = 0; i < len; ++i)
		{
			for (int j = 0; j < len - i - 1; ++j)
			{
				// compare current value and neighbor
				cout << "x[j]=" << x[j] << " > x[j+1]=" << x[j + 1] << endl;
				if (x[j] > x[j + 1])
					swap(x[j], x[j + 1]);
			}
			cout << "After pass " << i << endl;
			print(x, 4);
			cout << endl;
		}
	}
	//---------------------------------------------------------
}