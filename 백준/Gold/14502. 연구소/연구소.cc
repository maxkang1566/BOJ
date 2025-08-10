#include <bits/stdc++.h>
using namespace std;
int n, m;
int board[10][10], visited[10][10], ret;
vector<pair<int, int>> virusList, wallList;
const int dy[4] = {-1, 0, 1, 0};
const int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x)
{
  for (int i = 0; i < 4; i++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (ny < 0 || ny >= n || nx < 0 || nx >= m || visited[ny][nx] || board[ny][nx] == 1)
      continue;
    visited[ny][nx] = 1;
    dfs(ny, nx);
  }
  return;
}

int solve()
{
  fill(&visited[0][0], &visited[0][0] + 10 * 10, 0);
  for (pair<int, int> b : virusList)
  {
    visited[b.first][b.second] = 1;
    dfs(b.first, b.second);
  }

  int cnt = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (board[i][j] == 0 && !visited[i][j])
        cnt++;
    }
  }
  return cnt;
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> board[i][j];
      if (board[i][j] == 2)
        virusList.push_back({i, j});
      if (board[i][j] == 0)
        wallList.push_back({i, j});
    }
  }
  for (int i = 0; i < wallList.size(); i++)
  {
    for (int j = 0; j < i; j++)
    {
      for (int k = 0; k < j; k++)
      {
        board[wallList[i].first][wallList[i].second] = 1;
        board[wallList[j].first][wallList[j].second] = 1;
        board[wallList[k].first][wallList[k].second] = 1;
        ret = max(ret, solve());
        board[wallList[i].first][wallList[i].second] = 0;
        board[wallList[j].first][wallList[j].second] = 0;
        board[wallList[k].first][wallList[k].second] = 0;
      }
    }
  }

  cout << ret << "\n";
  return 0;
}