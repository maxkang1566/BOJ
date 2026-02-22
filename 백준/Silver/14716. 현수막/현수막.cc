#include <bits/stdc++.h>
using namespace std;
int m, n, ret = 0;
int dy[8] = {1, 1, 0, -1, -1, -1, 0, 1};
int dx[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int a[255][255], visited[255][255];

void bfs(int y, int x)
{
  queue<pair<int, int>> q;
  visited[y][x] = 1;
  q.push({y, x});
  while (q.size())
  {
    tie(y, x) = q.front();
    q.pop();
    for (int i = 0; i < 8; i++)
    {
      int ny = y + dy[i];
      int nx = x + dx[i];
      if (ny < 0 || ny >= m || nx < 0 || nx >= n || a[ny][nx] == 0)
        continue;
      if (visited[ny][nx])
        continue;

      visited[ny][nx] = 1;
      q.push({ny, nx});
    }
  }
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> m >> n;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < n; j++)
      cin >> a[i][j];

  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (a[i][j] == 1 && !visited[i][j])
      {
        ret++;
        bfs(i, j);
      }
    }
  }

  cout << ret << "\n";
  return 0;
}