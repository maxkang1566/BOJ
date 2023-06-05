#define _CRT_SECURE_NO_WARNINGS
#define MAX 10001
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, number;
	int count[MAX] = {0,};
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		scanf("%d", &number);
		count[number]++;
	}
	for (int i = 1; i < MAX; i++)
	{
		if (count[i] != 0)
		{
			for (int j = 0; j < count[i]; j++)
			{
				printf("%d\n", i);
			}
		}
	}
	return 0;
}