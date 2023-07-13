#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	cin >> n >> m;

	if (100 * n >= m)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}