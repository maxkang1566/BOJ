#include <bits/stdc++.h>
using namespace std;

long long v[100005];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	long long a;
	int n;

	long long value = -(111 << 62) - 1, maxCnt = 0, cnt = 0;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	sort(v, v+n);

	for (int i = 0; i < n; i++) {
		if (i == 0 || v[i - 1] == v[i])
			cnt++;
		else {
			if (cnt > maxCnt) {
				maxCnt = cnt;
				value = v[i - 1];
			}
			cnt = 1;
		}
	}

	if (cnt > maxCnt)
		value = v[n - 1];

	cout << value << "\n";
}