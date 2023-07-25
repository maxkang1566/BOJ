#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int n, temp, count = 0;
	int num1, num2, num3;
	cin >> n;

	for (int i = 1; i <= n; i++) {

		if (i >= 1 && i < 100) {
			count++;
		}
		if (i >= 100 && i < 1000) {
			temp = i;
			num1 = temp / 100;	temp -= num1 * 100;
			num2 = temp / 10;	temp -= num2 * 10;
			num3 = temp;
			if ((num2 - num1) == (num3 - num2))
				count++;
		}
	}
	cout << count << endl;
	return 0;
}