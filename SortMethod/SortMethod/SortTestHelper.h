#pragma once

#include <iostream>
#include <algorithm>
#include <ctime>
#include <string>
#include <assert.h>

using namespace std;

namespace SortTestHelper
{
	//����������飬����Ϊn����ΧΪrange_l��range_r
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

	//���ɽ�����������飬swapTimesΪ����������Ԫ�ؽ����Ĵ���
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

	//�����������
	template<typename T>
	int *copyIntArray(T a[], int n)
	{
		T *arr = new int[n];
		copy(a, a + n, arr);
		return arr;
	}


	// ��ӡ���麯��
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