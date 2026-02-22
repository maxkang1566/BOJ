#include <bits/stdc++.h>
using namespace std;

int n, m, k, ret, temp;
int a[104][104], visited[104][104];
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};

void dfs(int y, int x)
{
  visited[y][x] = 1;
  for (int i = 0; i < 4; i++)
  {
    int ny = y + dy[i];
    int nx = x + dx[i];

    if (ny < 1 || ny > n || nx < 1 || nx > m)
      continue;

    if (a[ny][nx] == 1 && !visited[ny][nx])
    {
      temp++;
      dfs(ny, nx);
    }
  }
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m >> k;
  for (int i = 0; i < k; i++)
  {
    int r, c;
    cin >> r >> c;
    a[r][c] = 1;
  }

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (a[i][j] == 1 && !visited[i][j])
      {
        temp = 1;
        dfs(i, j);
        ret = max(ret, temp);
      }
    }
  }
  cout << ret << "\n";

  return 0;
}