#include <bits/stdc++.h>
using namespace std;
int n, l, r, sum, cnt;
int board[52][52], visited[52][52];
const int dy[] = {-1, 0, 1, 0};
const int dx[] = {0, 1, 0, -1};
vector<pair<int, int>> v;

void dfs(int y, int x)
{
  for (int i = 0; i < 4; i++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];
    if (nx < 0 || nx >= n || ny < 0 || ny >= n || visited[ny][nx])
      continue;
    if (abs(board[ny][nx] - board[y][x]) >= l && abs(board[ny][nx] - board[y][x]) <= r)
    {
      visited[ny][nx] = 1;
      v.push_back({ny, nx});
      sum += board[ny][nx];
      dfs(ny, nx);
    }
  }
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> l >> r;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      cin >> board[i][j];

  while (1)
  {
    bool flag = 0;
    fill(&visited[0][0], &visited[0][0] + 52 * 52, 0);
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (!visited[i][j])
        {
          v.clear();
          visited[i][j] = 1;
          v.push_back({i, j});
          sum = board[i][j];
          dfs(i, j);
          if (v.size() == 1)
            continue;
          for (pair<int, int> b : v)
          {
            board[b.first][b.second] = sum / v.size();
            flag = 1;
          }
        }
      }
    }
    if (!flag)
      break;
    cnt++;
  }
  cout << cnt << "\n";
  return 0;
}