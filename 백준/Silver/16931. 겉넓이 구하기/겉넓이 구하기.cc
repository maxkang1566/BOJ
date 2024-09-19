#include <bits/stdc++.h>
using namespace std;

int n, m, result = 0;
int board[101][101];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> board[i][j];

  result += (n * m * 2);

  for (int i = 0; i < n; i++)
  {
    result += board[i][0];     // 왼쪽 면
    result += board[i][m - 1]; // 오른쪽 면
  }

  for (int j = 0; j < m; j++)
  {
    result += board[0][j];     // 앞쪽 면
    result += board[n - 1][j]; // 뒤쪽 면
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m - 1; j++)
    {
      result += abs(board[i][j] - board[i][j + 1]);
    }
  }

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < m; j++)
    {
      result += abs(board[i][j] - board[i + 1][j]);
    }
  }

  cout << result;
  return 0;
}