#include <iostream>
#include <queue>
#include <utility>
#include <string>
using namespace std;

#define X first
#define Y second

string board[602];
bool visited[602][602];
int dx[4] = { 1, 0, -1, 0 };	int dy[4] = { 0, 1, 0, -1 };

int main(void)
{
	int n, m;
	cin >> n >> m;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (board[i][j] == 'I') {
				q.push({ i, j });
				visited[i][j] = 1;
			}
		}
	}

	int peopleNum = 0;

	while (!q.empty()) {
		auto cur = q.front();
		q.pop();

		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.X + dx[dir];
			int ny = cur.Y + dy[dir];

			if (nx < 0 || ny < 0 || nx >= n || ny >= m)
				continue;
			if (board[nx][ny] == 'X' || visited[nx][ny])
				continue;
			if (board[nx][ny] == 'P')
				peopleNum++;

			visited[nx][ny] = 1;
			q.push({ nx, ny });
		}
	}

	if (peopleNum == 0)
		cout << "TT";
	else
		cout << peopleNum;
}