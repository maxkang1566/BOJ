#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	int len;

	cin >> a;
	len = a.length();

	for (int i = 0; i < len / 2; i++) {
		if (a[i] != a[len - i - 1]) {
			cout << 0;
			return 0;
		}
	}

	cout << 1;
	return 0;
}