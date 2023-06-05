#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a[3], temp;

	while (1)
	{
		scanf("%d %d %d", &a[0], &a[1], &a[2]);
		if (a[0] == 0 && a[1] == 0 && a[2] == 0)
			break;
		else {
			for (int i = 0; i < 2; i++)
			{
				for (int j = 0; j < 2; j++)
				{
					if (a[j] > a[j + 1])
					{
						temp = a[j];
						a[j] = a[j + 1];
						a[j + 1] = temp;
					}
				}
			}
			if (a[2] * a[2] == a[0] * a[0] + a[1] * a[1])
				printf("right\n");
			else
				printf("wrong\n");
		}
	}
}