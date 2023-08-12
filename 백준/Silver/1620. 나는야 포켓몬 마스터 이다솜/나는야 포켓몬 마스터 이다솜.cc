#include <bits/stdc++.h>
using namespace std;
string arr[100002];

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	map<string, int> myMap;
	string input, temp;

	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> temp;
		arr[i] = temp;
		myMap[temp] = i;
	}

	for (int i = 0; i < m; i++) {
		cin >> input;
		if (atoi(input.c_str()) == 0) {
			cout << myMap[input] << '\n';
		}
		else
		{
			cout << arr[atoi(input.c_str())] << '\n';
		}
	}
}