#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, sum = 0;
	while (1) {
		cin >> a;
		if (a == -1)
			break;

		sum += a;
	}
	cout << sum;
}