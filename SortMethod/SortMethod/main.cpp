
#include "SortTestHelper.h"
#include "BubbleSort.h"

int main()
{
	int n = 20;

	int *arr = SortTestHelper::generateRandomArray(n, 0, n);

	SortTestHelper::printArray(arr, n);

	bubbleSort(arr, n);

	SortTestHelper::printArray(arr, n);

	int *arr2 = SortTestHelper::generateNearlyOrderedArray(n, 2);
	SortTestHelper::printArray(arr2, n);

	delete[] arr;

	system("pause");
	return 0;
}