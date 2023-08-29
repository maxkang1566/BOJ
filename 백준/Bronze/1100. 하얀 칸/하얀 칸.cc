#include <bits/stdc++.h>
using namespace std;

char board[10][10];
int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int count = 0;

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> board[i][j];
			if (board[i][j] == 'F' && (i + j) % 2 == 0)
				count++;
		}
	}
	cout << count;
}