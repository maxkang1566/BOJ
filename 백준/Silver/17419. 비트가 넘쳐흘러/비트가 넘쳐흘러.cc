#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int main(void)
{
	int n, str_len, num = 0, count = 0;
	char numStr[1000000];
	cin >> n;
	cin >> numStr;

	str_len = strlen(numStr);

	for (int i = str_len - 1; i >= 0; i--) {
		if (numStr[i] == '1') {
			num += (1 << (str_len - i - 1));
		}
	}
	while (num != 0) {
		num = num - (num&((~num) + 1));
		count++;
	}
	cout << count << endl;
	return 0;
}