#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isAllCharSame(char arr[], int size) {
	if (size == 0) {
		return true;
	}

	char firstChar = arr[0];

	for (int i = 1; i < size; i++) {
		if (arr[i] != firstChar)
			return false;
	}

	return true;
}
int main(void)
{
	int len;
	int zeroToOne = 0, oneToZero = 0;
	char s[1000000];
	scanf("%s", s);

	len = strlen(s);

	if (isAllCharSame(s, len)) {
		printf("0\n");
		return 0;
	}

	if (s[0] == '0') {
		for (int i = 0; i < len; i++) {
			if (s[i] == '0'&&s[i + 1] == '1')
				zeroToOne++;
			if (s[i] == '1'&&s[i + 1] == '0')
				oneToZero++;
		}

		printf("%d\n", zeroToOne);
	}
	else if (s[0] == '1') {
		for (int i = 0; i < len; i++) {
			if (s[i] == '0'&&s[i + 1] == '1')
				zeroToOne++;
			if (s[i] == '1'&&s[i + 1] == '0')
				oneToZero++;
		}

		printf("%d\n", oneToZero);
	}

	return 0;
}