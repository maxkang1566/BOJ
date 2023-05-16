#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	long long n;
	int arr[10];
	int i = 0;
	int temp;

	scanf("%lld", &n);

	while (1)
	{
		arr[i] = n % 10;
		if (n / 10 == 0) break;

		else
		{
			n /= 10;
			i++;
		}
	}
	
	for (int j = 0; j < i; j++) {
		for (int k = 0; k < i-j; k++) {  
			if (arr[k+1] > arr[k]) { 
				temp = arr[k];
				arr[k] = arr[k+1];
				arr[k+1] = temp;
			}
		}
	}

	for (int j = 0; j < i+1; j++) { 
		printf("%d", arr[j]);
	}
	return 0;
}