#pragma once
#include "helper.h"
namespace Sel_Sort
{
	struct Sel {
		int current_min;
		int current_min_index = 0;
	};
	//---------------------------------------------------------
	void min_slice(const int* x, int lo, int len, Sel* s)
	{
		// Fin min value within slice x[lo:len]s
		s->current_min = x[lo];
		s->current_min_index = 0;
		for (int i = lo; i < len; ++i)
			if (x[i] < s->current_min)
			{
				s->current_min = x[i];
				s->current_min_index = i;
			}
	}
	//---------------------------------------------------------
	void selection_sort(int* x, int len)
	{
		Sel s;
		for (int i = 0; i < len - 1; ++i)
		{
			// Find min in x[i:len]
			min_slice(x, i, len, &s);

			// Swqp current aray value with min
			swap(x[i], x[s.current_min_index]);

			cout << "current value of array:\n";
			print(x, len);
		}
	}
	//---------------------------------------------------------
}