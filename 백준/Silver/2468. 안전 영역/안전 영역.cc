#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int board[101][101];
bool vis[101][101];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n;

void init_vis() {
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			vis[i][j] = 0;
}

int main(void)
{
	int maxHeight = -1, maxArea = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];

			if (board[i][j] > maxHeight)
				maxHeight = board[i][j];
		}

	for (int rain = 0; rain <= maxHeight; rain++) {
		int num = 0;
		init_vis();

		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n; j++) {
				if (board[i][j] > rain && !vis[i][j]) {
					queue<pair<int, int>> Q;
					vis[i][j] = 1;
					Q.push({ i, j });

					while (!Q.empty()) {
						auto cur = Q.front();
						Q.pop();

						for (int dir = 0; dir < 4; dir++) {
							int nx = cur.X + dx[dir];
							int ny = cur.Y + dy[dir];

							if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
							if (!vis[nx][ny] && board[nx][ny] > rain) {
								vis[nx][ny] = 1;
								Q.push({ nx, ny });

							}
						}
					}
					num++;
				}
			}
		}

		if (num > maxArea)
			maxArea = num;
	}
	cout << maxArea << "\n";
}