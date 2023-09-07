#include <bits/stdc++.h>
using namespace std;

string arr[30];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	if (is_sorted(arr, arr + n)) {
		cout << "INCREASING";
	}
	else if (is_sorted(arr, arr + n, greater<string>())) {
		cout << "DECREASING";
	}
	else
		cout << "NEITHER";

	return 0;
}