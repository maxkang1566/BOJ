#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long a, b, c;
	scanf("%lld %lld %lld", &a, &b, &c);
	printf("%lld", a + b + c);
}