#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

string board[26];
bool vis[26][26];
int n, num = 0;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, 1, 0, -1 };
vector<int> apartment;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> board[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (board[i][j] == '0' || vis[i][j]) continue;

			num++;
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
					if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
					if (vis[nx][ny] || board[nx][ny] != '1') continue;
					vis[nx][ny] = 1;
					Q.push({ nx, ny });
				}
			}
			apartment.push_back(area);
		}
	}

	sort(apartment.begin(), apartment.end());

	cout << num << "\n";
	for (int i = 0; i < apartment.size(); i++) {
		cout << apartment[i] << "\n";
	}
}