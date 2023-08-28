#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

char board[101][101];
bool vis[101][101];
int n, m;
int W = 0, B = 0;

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };


int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> m >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
		}
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (vis[i][j]) continue;

			if (board[i][j] == 'W') {
				queue<pair<int, int>> Q;
				vis[i][j] = 1;
				int area = 0;
				Q.push({ i, j });
				while (!Q.empty()) {
					area++;
					pair<int, int> cur = Q.front();
					Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (vis[nx][ny] || board[nx][ny]!='W') continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });
					}
				}
				W += (area*area);
			}
			else if (board[i][j] == 'B') {
				queue<pair<int, int>> Q;
				vis[i][j] = 1;
				int area = 0;
				Q.push({ i, j });
				while (!Q.empty()) {
					area++;
					pair<int, int> cur = Q.front();
					Q.pop();
					for (int dir = 0; dir < 4; dir++) {
						int nx = cur.X + dx[dir];
						int ny = cur.Y + dy[dir];
						if (nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
						if (vis[nx][ny] || board[nx][ny] != 'B') continue;
						vis[nx][ny] = 1;
						Q.push({ nx, ny });
					}
				}
				B += (area*area);
			}
			
		}
	}

	cout << W << " " << B << "\n";
	return 0;
}