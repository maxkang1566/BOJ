#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n;
	int num = 1;
	scanf("%d", &n);

	if (n == 1) {
		printf("0"); return 0;
	}

	num = num*n*(n - 1);

	printf("%d", num);
}