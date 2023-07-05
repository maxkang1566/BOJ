#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void)
{
	int arr[42] = {0};
	int a, remainder;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		scanf("%d", &a);
		remainder = a % 42;
		arr[remainder]++;
	}

	for (int i = 0; i < 42; i++)
	{
		if (arr[i] != 0)
			sum++;
	}
	printf("%d", sum);
}