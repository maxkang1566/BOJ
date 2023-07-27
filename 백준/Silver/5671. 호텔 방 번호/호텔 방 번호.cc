#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	int temp, num1, num2, num3, num4;
	int count;

	while (scanf("%d %d", &n, &m)!=EOF) {
		count = 0;

		for (int i = n; i <= m; i++) {
			if (i >= 1 && i < 10) {
				count++;
			}
			if (i >= 10 && i < 100) {
				temp = i;
				num1 = temp / 10;
				temp -= 10 * num1;
				num2 = temp;

				if (num1 != num2)
					count++;
			}
			if (i >= 100 && i<1000) {
				temp = i;
				num1 = temp / 100;	temp -= num1 * 100;
				num2 = temp / 10;	temp -= num2 * 10;
				num3 = temp;

				if ((num1 != num2) && (num2 != num3) && (num1!=num3))
					count++;
			}
			if (i >= 1000) {
				temp = i;
				num1 = temp / 1000;	temp -= num1 * 1000;
				num2 = temp / 100;	temp -= num2 * 100;
				num3 = temp / 10;	temp -= num3 * 10;
				num4 = temp;

				if ((num1 != num2) && (num1 != num3) && (num2 != num3) && (num2 != num4) && (num3 != num4) && (num4 != num1))
					count++;
			}
		}
		cout << count << endl;
	}
}