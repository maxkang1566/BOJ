#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int	e, s, m;
	int temp_e = 1, temp_s = 1, temp_m = 1;
	int year = 1;
	
	cin >> e >> s >> m;

	while (1) {
		if (temp_e == e&&temp_s == s&&temp_m == m)
			break;

		temp_e++; temp_s++; temp_m++;
		year++;

		if (temp_e > 15)
			temp_e = 1;
		if (temp_s > 28)
			temp_s = 1;
		if (temp_m > 19)
			temp_m = 1;
	}
	cout << year << endl;
	return 0;
}