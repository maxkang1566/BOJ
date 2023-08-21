#include <bits/stdc++.h>
using namespace std;

int n, m;
int arr[10];
bool isUsed[10];
int temp[10];


void solve(int k)			
{
	if (k == m) {
		for (int i = 0; i < m; i++) {
			cout << arr[i] << ' ';
		}
		cout << '\n';
		return;
	}

	/*int start = 1;
	if (k != 0) {
		start = arr[k - 1];
	}*/
	
	for (int i = 1; i <= n; i++) {
		if (!isUsed[i]) {
			arr[k] = temp[i - 1];
			isUsed[i] = 1;
			solve(k + 1);
			isUsed[i] = 0;
		}
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