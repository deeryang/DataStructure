#pragma once

#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>
#include <assert.h>

using namespace std;

namespace SortTestHelper
{
	//生成随机数组，个数为n，范围为range_l到range_r
	int *generateRandomArray(int n, int range_l, int range_r)
	{
		int *arr = new int[n];
		srand(time(NULL));
		for (int i = 0; i < n; i++)
		{
			arr[i] = rand() % (range_r - range_l + 1) + range_l;
		}

		return arr;
	}

	//生成近乎有序的数组，swapTimes为有序数组中元素交换的次数
	int *generateNearlyOrderedArray(int n, int swapTimes)
	{
		int *arr = new int[n];
		for (int i = 0; i < n; i++)
			arr[i] = i;

		srand(time(NULL));
		for (int i = 0; i < swapTimes; i++)
		{
			int posx = rand() % n;
			int posy = rand() % n;
			swap(arr[posx], arr[posy]);
			//cout << "posx = " << posx << " " << "posy = " << posy << endl;
		}

		return arr;
	}

	//复制数组操作
	template<typename T>
	int *copyIntArray(T a[], int n)
	{
		T *arr = new int[n];
		copy(a, a + n, arr);
		return arr;
	}


	// 打印数组函数
	template<typename T>
	void printArray(T arr[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << arr[i] << " ";
		}
		cout << endl;

		return;
	}
}