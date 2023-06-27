#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

typedef struct coord {
	int x;
	int y;
}coord;

int compare(const void* a, const void* b) {
	coord A = *(coord*)a;
	coord B = *(coord*)b;
	if (A.x > B.x)
		return 1;
	else if (A.x == B.x) {
		if (A.y > B.y)
			return 1;
		else
			return -1;
	}
	return -1;
}

int main(void)
{
	int n;
	scanf("%d", &n);
	coord* arr = (coord*)malloc(sizeof(coord)*n);

	for (int i = 0; i < n; i++) {
		scanf("%d %d", &arr[i].x, &arr[i].y);
	}
	qsort(arr, n, sizeof(coord), compare);

	for (int i = 0; i < n; i++) {
		printf("%d %d\n", arr[i].x, arr[i].y);
	}

	free(arr);
	return 0;
}