#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[1002];
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int r, c;
int dist1[1002][1002];	
int dist2[1002][1002];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin >> r >> c;

	for (int i = 0; i < r; i++) {
		fill(dist1[i], dist1[i] + c, -1);
		fill(dist2[i], dist2[i] + c, -1);
	}
	for (int i = 0; i < r; i++) {
		cin >> board[i];
	}
	queue<pair<int, int>> Q_1;		//불(F)
	queue<pair<int, int>> Q_2;		//지훈(J)

	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			if (board[i][j] == 'F') {
				Q_1.push({ i, j });
				dist1[i][j] = 0;
			}
			if (board[i][j] == 'J') {
				Q_2.push({ i, j });
				dist2[i][j] = 0;
			}
		}
	}

	while (!Q_1.empty()) {						//불
		auto cur = Q_1.front();
		Q_1.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) continue;
			if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;

			dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
			Q_1.push({ nx, ny });
		}
	}
	
	while (!Q_2.empty()) {						//지훈
		auto cur = Q_2.front();
		Q_2.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || nx >= r || ny < 0 || ny >= c) {
				cout << dist2[cur.X][cur.Y] + 1;
				return 0;
			}
			if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
			if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) continue;
			dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
			Q_2.push({ nx, ny });

		}
	}
	cout << "IMPOSSIBLE" << "\n";
	return 0;
}