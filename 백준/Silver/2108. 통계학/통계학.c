#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void* first, const void* second) {
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

double avg(int* arr, int size) {
	double sum = 0;
	double avg;
	for (int i = 0; i < size; i++) {
		sum += arr[i];
	}
	avg = round(sum / size);

	return avg;
}

int median(int* arr, int size) {
	int index;
	index = size / 2;

	return arr[index];
}

int mode(int* arr, int size) {
	int count[8001] = { 0 };
	int countMax = -1, countMode = 0;
	int mode;

	for (int i = 0; i < size; i++) {
		count[arr[i] + 4000]++;
		if (count[arr[i] + 4000] > countMax)
			countMax = count[arr[i] + 4000];
	}

	for (int i = 0; i < 8001; i++) {
		if (count[i] == countMax) {
			if (countMode == 0) {
				mode = i - 4000;
				countMode++;
			}
			else if (countMode == 1) {
				mode = i - 4000;
				break;
			}
		}
	}

	return mode;
}

int range(int* arr, int size) {
	return arr[size - 1] - arr[0];
}

int main(void)
{
	int n;
	scanf("%d", &n);

	int* arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);
	
	printf("%d\n", (int)avg(arr, n));
	printf("%d\n", median(arr, n));
	printf("%d\n", mode(arr, n));
	printf("%d\n", range(arr, n));
}