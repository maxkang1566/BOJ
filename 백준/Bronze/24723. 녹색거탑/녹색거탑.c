#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, num = 1;

	scanf("%d", &n);
	for (int i = 1; i <= n; i++)
	{
		num *= 2;
	}

	printf("%d", num);
}