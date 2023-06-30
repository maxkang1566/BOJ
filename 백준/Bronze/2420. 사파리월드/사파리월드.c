#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

int main(void)
{
	long long a, b;
	scanf("%lld %lld", &a, &b);
	printf("%lld", llabs(a - b));
}