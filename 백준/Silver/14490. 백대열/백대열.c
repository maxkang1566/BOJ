#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b);

int main(void)
{
	int n, m, _gcd;
	char colon;

	scanf("%d %c %d", &n, &colon, &m);
	_gcd = gcd(n, m);

	printf("%d:%d", n / _gcd, m / _gcd);

	return 0;
}

int gcd(int a, int b) {
	int gcdNum = 0;

	if (a > b) {
		for (int i = 1; i <= b; i++) {
			if (a%i == 0 && b%i == 0)
				gcdNum = i;
		}
	}
	else {
		for (int i = 1; i <= a; i++) {
			if (a%i == 0 && b%i == 0)
				gcdNum = i;
		}
	}

	return gcdNum;
}