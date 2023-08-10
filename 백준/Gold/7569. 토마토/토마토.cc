#include <bits/stdc++.h>
using namespace std;

int board[102][102][102];
int dist[102][102][102];
int n, m, h;
int dx[6] = {0, 0, 0, 0, 1, -1};
int dy[6] = {0, 0, 1, -1, 0, 0};
int dz[6] = {1, -1, 0, 0, 0, 0};
queue<tuple<int, int, int>> Q;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int day = 0;

	cin >> m >> n >> h;
	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				int temp;
				cin >> temp;
				board[j][k][i] = temp;
				if (temp == 1) Q.push({ j, k, i });
				if (temp == 0) dist[j][k][i] = -1;
			}
		}
	}
	while (!Q.empty()) {
		auto cur = Q.front();
		Q.pop();
		int curX, curY, curZ;
		tie(curX, curY, curZ) = cur;

		for (int dir = 0; dir < 6; dir++) {
			int nx = curX + dx[dir];
			int ny = curY + dy[dir];
			int nz = curZ + dz[dir];

			if (nx < 0 || nx >= n || ny < 0 || ny >= m || nz < 0 || nz >= h) continue;
			if (dist[nx][ny][nz] >= 0) continue;

			dist[nx][ny][nz] = dist[curX][curY][curZ] + 1;
			Q.push({ nx, ny, nz });
		}
	}

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < n; j++) {
			for (int k = 0; k < m; k++) {
				if (dist[j][k][i] == -1) {
					cout << "-1"<<"\n";
					return 0;
				}
				day = max(day, dist[j][k][i]);
			}
		}
	}
	
	cout << day << "\n";
	return 0;
}