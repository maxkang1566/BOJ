#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	int len;
	char str[51];
}Word;

int compare(const void* first, const void* second)
{
	Word *a = (Word*)first;
	Word *b = (Word*)second;

	if (a->len < b->len)
		return -1;
	else if (a->len > b->len)
		return 1;
	else if (a->len == b->len)
	{
		if (strcmp(a->str, b->str) < 0)
			return -1;
		else
			return 1;
	}
	return 0;
}

int main(void)
{
	int n;

	scanf("%d", &n);
	Word* arr = (Word*)malloc(sizeof(Word)*n);

	for (int i = 0; i < n; i++) {
		scanf("%s", arr[i].str);
		arr[i].len = strlen(arr[i].str);
		
		for (int j = 0; j < i; j++) {
			if (strcmp(arr[i].str, arr[j].str) == 0) {
				i -= 1;
				n -= 1;
				break;
			}
		}
	}

	qsort(arr, n, sizeof(arr[0]), compare);

	for (int i = 0; i < n; i++) {
		printf("%s\n", arr[i].str);
	}

	return 0;


}