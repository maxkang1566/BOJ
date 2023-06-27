#include<stdio.h>
#include <string.h>

int main(void) {
	int a, b, c;
	int mul;
	char arr[1000];
	char count[10] = { 0, };
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	
	mul = a * b * c;
	sprintf(arr, "%d", mul);

	for (int i = 0; i < strlen(arr); i++) {
		for(int j=0;j<10;j++)
		if (arr[i] == 48+j)
			count[j]++;
	}

	for (int i = 0; i < 10; i++)
		printf("%d\n", count[i]);

	return 0;
}