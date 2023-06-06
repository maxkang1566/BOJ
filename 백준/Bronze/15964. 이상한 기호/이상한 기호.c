#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int calc(int a, int b) {
	int result;
	result = (a + b)*(a - b);
	return result;
}

int main(void)
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("%d", calc(a, b));
}