#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, v, count = 0;
	
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int)*n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < n; i++)
	{
		if (arr[i] == v)
			count++;
	}
	printf("%d", count);
}