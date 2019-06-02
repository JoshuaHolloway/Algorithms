#include "helper.h"

int main()
{
	int x[] = { 5, 4, 9, 1 };

	cout << "Before sorting:\n";
	print(x, 4);

	cout << "\nApply bubble-sort:\n";
	bubble_sort(x, 4);

	cout << "\nAfter bubble-sort:\n";
	print(x, 4);

	getchar();
	return 0;
}