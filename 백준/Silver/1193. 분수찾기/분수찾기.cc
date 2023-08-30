#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int x, cnt = 1, temp = 2;
	int i, j;
	cin >> x;

	while (1) {
		if (temp % 2 == 0) {
			for (j = 1, i = temp - 1; i + j == temp && i > 0 && j > 0; j++, i--) {
				if (cnt == x) {
					cout << i << "/" << j;
					return 0;
				}
				cnt++;
			}
			temp++;
		}
		else {
			for (i = 1, j = temp - 1; i + j == temp && i > 0 && j > 0; i++, j--) {
				if (cnt == x) {
					cout << i << "/" << j;
					return 0;
				}
				cnt++;
			}
			temp++;
		}
	}

	return 0;
}