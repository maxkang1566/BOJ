#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char arr[3];
	scanf("%s", arr);

	if (strcmp(arr, "A+")==0)
		printf("4.3\n");
	else if (strcmp(arr, "A0") == 0)
		printf("4.0\n");
	else if (strcmp(arr, "A-") == 0)
		printf("3.7\n");
	else if (strcmp(arr, "B+") == 0)
		printf("3.3\n");
	else if (strcmp(arr, "B0") == 0)
		printf("3.0\n");
	else if (strcmp(arr, "B-") == 0)
		printf("2.7\n");
	else if (strcmp(arr, "C+") == 0)
		printf("2.3\n");
	else if (strcmp(arr, "C0") == 0)
		printf("2.0\n");
	else if (strcmp(arr, "C-") == 0)
		printf("1.7\n");
	else if (strcmp(arr, "D+") == 0)
		printf("1.3\n");
	else if (strcmp(arr, "D0") == 0)
		printf("1.0\n");
	else if (strcmp(arr, "D-") == 0)
		printf("0.7\n");
	else if (strcmp(arr, "F") == 0)
		printf("0.0\n");

	return 0;
}