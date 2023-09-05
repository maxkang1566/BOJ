#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll arr[1000005];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	string a;
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		int len = a.length();
		reverse(a.begin(), a.end());
		
		if (a.front() == '0') {
			while (a.front() != '0') {
				a = a.substr(1);
			}
		}
		arr[i] = stoll(a);
	}

	sort(arr, arr + n);
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\n";
	}
}