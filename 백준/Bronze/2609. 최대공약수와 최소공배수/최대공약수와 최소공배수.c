#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int gcd(int a, int b);
int lcm(int a, int b);

int main(void)
{
	int a, b;
	int _gcd, _lcm;
	scanf("%d %d", &a, &b);
	
	_gcd = gcd(a, b);
	_lcm = lcm(a, b);

	printf("%d\n%d\n", _gcd, _lcm);
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

int lcm(int a, int b) {
	int lcmNum;

	lcmNum = abs(a*b) / gcd(a, b);
	
	return lcmNum;
}