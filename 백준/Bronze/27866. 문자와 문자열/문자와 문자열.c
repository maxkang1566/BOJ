#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char arr[1000];
	int a;

	scanf("%s", arr);
	scanf("%d", &a);

	printf("%c", arr[a-1]);
}