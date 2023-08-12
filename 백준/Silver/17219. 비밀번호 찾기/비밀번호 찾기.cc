#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	map<string, string> myMap;
	string a, b;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		myMap[a] = b;
	}

	for (int i = 0; i < m; i++) {
		cin >> a;
		cout << myMap[a] << "\n";
	}

	return 0;
}