#pragma once

#include <vector>
#include <algorithm>

template<typename T>
void bubbleSort(T arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			if (arr[i] > arr[j])
				swap(arr[i], arr[j]);
		}
	}
}