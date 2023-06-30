#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	char a[100];
	scanf("%s", a);

	printf("%d", strlen(a));
}