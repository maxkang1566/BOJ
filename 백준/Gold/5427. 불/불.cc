#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int w, h;
int dist1[1002][1002];	
int dist2[1002][1002];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int tc;
	cin >> tc;

	while (tc--) {
		string board[1002];
		bool check = false;
		cin >> h >> w;

		for (int i = 0; i < w; i++) {
			fill(dist1[i], dist1[i] + h, -1);
			fill(dist2[i], dist2[i] + h, -1);
		}
		for (int i = 0; i < w; i++) {
			cin >> board[i];
		}
		queue<pair<int, int>> Q_1;		
		queue<pair<int, int>> Q_2;	

		for (int i = 0; i < w; i++) {
			for (int j = 0; j < h; j++) {
				if (board[i][j] == '*') {
					Q_1.push({ i, j });
					dist1[i][j] = 0;
				}
				if (board[i][j] == '@') {
					Q_2.push({ i, j });
					dist2[i][j] = 0;
				}
			}
		}

		while (!Q_1.empty()) {					
			auto cur = Q_1.front();
			Q_1.pop();

			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= w || ny < 0 || ny >= h) continue;
				if (dist1[nx][ny] >= 0 || board[nx][ny] == '#') continue;

				dist1[nx][ny] = dist1[cur.X][cur.Y] + 1;
				Q_1.push({ nx, ny });
			}
		}

		while (!Q_2.empty()) {						
			auto cur = Q_2.front();
			Q_2.pop();

			for (int dir = 0; dir < 4; dir++) {
				int nx = cur.X + dx[dir];
				int ny = cur.Y + dy[dir];

				if (nx < 0 || nx >= w || ny < 0 || ny >= h) {
					cout << dist2[cur.X][cur.Y] + 1<<"\n";
					check = true;
					break;
				}
				if (dist2[nx][ny] >= 0 || board[nx][ny] == '#') continue;
				if (dist1[nx][ny] != -1 && dist1[nx][ny] <= dist2[cur.X][cur.Y] + 1) continue;
				dist2[nx][ny] = dist2[cur.X][cur.Y] + 1;
				Q_2.push({ nx, ny });

			}
			if (check)
				break;
		}
		if (!check) {
			cout << "IMPOSSIBLE" << "\n";
		}
	}
	
	return 0;
}