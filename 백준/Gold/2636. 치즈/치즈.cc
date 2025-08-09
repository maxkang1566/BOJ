#include <bits/stdc++.h>
using namespace std;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
int board[101][101], visited[101][101], n, m, ret, cheese;
vector<pair<int, int>> v;

void solve(int y, int x)
{
  visited[y][x] = 1;
  if (board[y][x] == 1)
  {
    v.push_back({y, x});
    return;
  }
  for (int i = 0; i < 4; i++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx])
      continue;
    solve(ny, nx);
  }
  return;
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> board[i][j];

  while (1)
  {
    fill(&visited[0][0], &visited[101][101], 0);
    v.clear();
    solve(0, 0);
    cheese = v.size();

    for (pair<int, int> b : v)
    {
      board[b.first][b.second] = 0;
    }
    bool flag = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        if (board[i][j] != 0)
          flag = 1;
      }
    }
    ret++;
    if (!flag)
      break;
  }
  cout << ret << "\n"
       << cheese << "\n";
  return 0;
}