#define _CRT_SECURE_NO_WARNINGS
#include <cstring>
#include <iostream>
using namespace std;

int main(void)
{
	char a[51];
	cin >> a;

	for (int i = 0; i < strlen(a); i++) {
		cout << a[i];
	}
	cout << "??!";
}