#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100];
	scanf("%s", a);

	for (int i = 0; i < strlen(a); i++) {
		if (65 <= a[i] && a[i] <= 90) {
			a[i] += 32;
		}
		else if (97 <= a[i] && a[i] <= 122) {
			a[i] -= 32;
		}
	}

	printf("%s", a);
}