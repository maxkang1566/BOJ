#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

char board[102][102];
bool vis[102][102];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int n;

void bfs(int i, int j)
{
	queue<pair<int, int>> Q;
	Q.push({ i, j });
	vis[i][j] = 1;

	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
			if (vis[nx][ny] == 1 || board[i][j] != board[nx][ny]) continue;
			vis[nx][ny] = 1;
			Q.push({ nx, ny });
		}
	}
}

int area()
{
	int count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (!vis[i][j]) {
				count++;
				bfs(i, j);
			}
		}
	}
	return count;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int area_normal, area_no_red;

	cin >> n;
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> board[i][j];
		}
	}

	area_normal = area();

	for (int i = 0; i < n; i++)
		fill(vis[i], vis[i] + n, false);

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == 'G')
				board[i][j] = 'R';
		}
	}

	area_no_red = area();

	cout << area_normal << " " << area_no_red << "\n";
}