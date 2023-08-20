#include <bits/stdc++.h>
using namespace std;

int board[129][129];
int white = 0, blue = 0;

bool check(int n, int x, int y)
{
	for (int i = x; i < x + n; i++) {
		for (int j = y; j < y + n; j++) {
			if (board[i][j] != board[x][y])
				return false;
		}
	}
	return true;
}
void solve(int n, int x, int y)
{
	if (check(n, x, y)) {
		if (board[x][y] == 0)
			white++;
		else if (board[x][y] == 1)
			blue++;

		return;
	}

	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 2; j++)
			solve(n / 2, x + i*n / 2, y + j*n / 2);
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			cin >> board[i][j];

	solve(n, 0, 0);
	cout << white << "\n" << blue;

	return 0;
}