#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int Palindrome(char *str) {
	int len = strlen(str);
	int i, j;

	for (i = 0, j = len - 1; i < j; i++, j--) {
		if (str[i] != str[j])
			return 0;
	}

	return 1;
}

int main(void)
{
	char arr[11];

	while (1) {
		scanf("%s", arr);

		if (arr[0] == '0')
			break;

		if (Palindrome(arr))
			printf("yes\n");
		else
			printf("no\n");
	}
}