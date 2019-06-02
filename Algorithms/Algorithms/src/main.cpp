#include "bubble-sort.h"
#include "selection-sort.h"
#include "helper.h"
int main()
{
	//--------------------------------------------------------
	// Bubble Sort
	int x[] = { 5, 4, 9, 1 };
	cout << "Before sorting:\n";
	print(x, 4);

	cout << "\nApply bubble-sort:" << endl;
	Bub_Sort::bubble_sort(x, 4);

	cout << "\nAfter bubble-sort:" << endl;
	print(x, 4);
	//--------------------------------------------------------
	// Selection Sort
	//int y[] = { 5, 4, 9, 1 };
	int y[] = { 2, 8, 5, 3, 9, 4, 1 };
	cout << "Before sorting:\n";
	print(y, 7);

	cout << "\nApply selection-sort:" << endl;
	Sel_Sort::selection_sort(y, 7);

	cout << "\nAfter selection-sort:" << endl;
	print(y, 7);

	getchar();
	return 0;
}