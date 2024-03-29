#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int static compare(const void* first, const void* second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main(void)
{
	int n;

	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);

	for (int i = 0; i < n; i++)
		printf("%d\n", arr[i]);

	return 0;
	
}