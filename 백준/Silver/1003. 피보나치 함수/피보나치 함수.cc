#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

int main(void)
{
	int n, t, arr[45] = { 0 };
	arr[0] = 1;
	arr[1] = 1;

	scanf("%d", &t);
	for (int i = 2; i <= 40; i++) {
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	for (int i = 0; i < t; i++) {
		scanf("%d", &n);

		if (n == 0) {
			printf("1 0\n");
		}
		else if (n == 1) {
			printf("0 1\n");
		}
		else {
			printf("%d %d\n", arr[n - 2], arr[n - 1]);
		}
	}
}