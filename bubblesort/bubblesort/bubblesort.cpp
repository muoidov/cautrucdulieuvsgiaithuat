
#include <iostream>
using namespace std;
void swap(int* a, int* b) {
	int x = *a;
	*a = *b;
	*b = x;
}
void bubbleSort1(int arr[], int n) {
	for (int i = 0; i < n-1; i++)
	{
		for (int j = n - 1; j > i; j--) {
			if (arr[j] < arr[j - 1]) {
				swap(&arr[j], &arr[j - 1]);
			}
		}
	}
}
void bubbleSort2(int arr[], int n) {
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j <n-1-i; j++) {
			if (arr[j] < arr[j + 1]) {
				swap(&arr[j], &arr[j + 1]);
			}
		}
	}
}
void selectionSort(int arr[], int n) {
	int min_index = 0;
	for (int i = 0; i < n - 1; i++) {
		min_index = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[min_index]) {
				min_index = j;
			}
		}
		swap(&arr[i],&arr[min_index]);
	}
}
int pivot(int arr[], int l, int h) {
	int p = arr[h];
	int i = l - 1;
	for (int j = 1; j < h; j++) {
		if (arr[j] < p) {
			i++;
			swap(&arr[i], &arr[j]);
		}
	}swap(&arr[i + 1], &arr[h]);
	return (i + 1);
}
void QuickSort(int arr[], int l, int h) {
	if (l < h) {
		int pi = pivot(arr, l, h);
		QuickSort(arr, l, pi - 1);
		QuickSort(arr, pi+1,h);
	}
}

void output(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " "<<endl;
	}
}
void merge(int arr[], int l, int m, int h) {
	int i, j, k = l;
	int n1 = m - l + 1;
	int n2 = h - m;
	int* L = new int[n1];
	int* R = new int[n2];
	for (i = 0; i < n1; i++) {
		L[i] = arr[l + i];
	}
	for (j = 0; j < n1; j++) {
		R[j] = arr[m + j + 1];
	}
	while (i < n1 && j < n2) {
		arr[k++] = (L[i] <= R[j] ? L[i++] : R[j++]);
	}
	while (i < n1) {
		arr[k++] = L[i++];

	}
	while (j < n2) {
		arr[k++] = R[j++];
	}
}
void mergeSort(int arr[], int l, int h) {
	if (l < h) {
		int  m = l + (h - l) / 2;
		mergeSort(arr, l,m);
		mergeSort(arr, m+1,h);
		merge(arr, l,m,h);

	}
}
int binarySearchloop(int arr[], int l, int h, int x) {
	while (l <= h) {
		int m = l + (h - l) / 2;
		if (arr[m] == x) {
			return m;
		}
		if (arr[m] < x) {
			l = m + 1;
		}
		if (arr[m] > x) {
			h = m - 1;
		}
	}
	return -1;
}
int binarySearchdequy(int arr[], int l, int h, int x) {
	if (l <= h) {
		int m = l + (h - l) / 2;
		if (arr[m] == x) {
			return m;
		}
		if (arr[m] < x) {
			return binarySearchdequy(arr, m + 1, h, x);
		}
		else {
			return binarySearchdequy(arr, l, m - 1, x);
		}
		return -1;
	}
}
int main()
{
	int arr[] = { 6,8,5,9,1,2,3 };
	int length = sizeof(arr) / sizeof(int);
	mergeSort(arr,0, length-1);
	output(arr, length);
}


