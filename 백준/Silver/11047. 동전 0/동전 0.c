#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int n, k;
	int num = 0;
	scanf("%d %d", &n, &k);

	int* arr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	n--;
	while (k != 0) {
		if (arr[n] > k)
			n--;
		else {
			num++;
			k -= arr[n];
		}
	}

	printf("%d", num);
}