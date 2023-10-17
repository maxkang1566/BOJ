#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int x, y, w, h;
	int len[4];
	int result = 1010;
	cin >> x >> y >> w >> h;

	len[0] = x;	len[1] = y;
	len[2] = w - x;	len[3] = h - y;

	for (int i = 0; i < 4; i++) {
		result = min(result, len[i]);
	}

	cout << result;
}