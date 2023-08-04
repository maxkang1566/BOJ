#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	int sum = 0, num;
	for (int i = 0; i < 5; i++) {
		cin >> num;
		sum += num;
	}
	cout << sum;
	return 0;
}