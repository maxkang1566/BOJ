#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
int temp[10];


void solve(int k)			
{
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << temp[arr[i]] << ' ';
		}
		cout << '\n';
		return;
	}

	int start = 0;
	if (k != 0) {
		start = arr[k - 1];
	}
	
	for (int i = start; i < n; i++) {
		arr[k] = i;
		solve(k + 1);
	}
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> temp[i];

	sort(temp, temp + n);

	solve(0);
	return 0;
}