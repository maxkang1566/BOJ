#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n, num = 1, count = 0;
	scanf("%d", &n);
	
	count += n / 5;
	count += n / 25;
	count += n / 125;

	printf("%d", count);

	return 0;
}