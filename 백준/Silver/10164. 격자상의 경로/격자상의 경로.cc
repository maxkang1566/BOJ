#include <bits/stdc++.h>
using namespace std;
int n, m, k, x, y, ret;
int board[16][16];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m >> k;

  if (k == 0)
  {
    for (int i = 0; i < n; i++)
      board[i][0] = 1;

    for (int j = 0; j < m; j++)
      board[0][j] = 1;

    for (int i = 1; i < n; i++)
    {
      for (int j = 1; j < m; j++)
      {
        board[i][j] = board[i - 1][j] + board[i][j - 1];
      }
    }
    ret = board[n - 1][m - 1];
  }
  else
  {
    x = (k - 1) / m;
    y = (k - 1) % m;

    int dp1[16][16] = {0};
    int dp2[16][16] = {0};
    for (int i = 0; i <= x; i++)
      dp1[i][0] = 1;
    for (int j = 0; j <= y; j++)
      dp1[0][j] = 1;

    for (int i = 1; i <= x; i++)
    {
      for (int j = 1; j <= y; j++)
      {
        dp1[i][j] = dp1[i - 1][j] + dp1[i][j - 1];
      }
    }

    for (int i = x; i < n; i++)
      dp2[i][y] = 1;
    for (int j = y; j < m; j++)
      dp2[x][j] = 1;

    for (int i = x + 1; i < n; i++)
    {
      for (int j = y + 1; j < m; j++)
      {
        dp2[i][j] = dp2[i - 1][j] + dp2[i][j - 1];
      }
    }

    ret = dp1[x][y] * dp2[n - 1][m - 1];
  }
  cout << ret << "\n";
  return 0;
}