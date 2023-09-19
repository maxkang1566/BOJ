#include <bits/stdc++.h>
using namespace std;

int dp[30];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	dp[1] = 1; dp[2] = 2; dp[3] = 4;

	for (int i = 4; i < 11; i++) {
		dp[i] = dp[i - 1] + dp[i - 2] + dp[i - 3];
	}

	int T;
	cin >> T;

	while (T--) {
		int a;
		cin >> a;
		cout << dp[a] << "\n";
	}

	return 0;
}