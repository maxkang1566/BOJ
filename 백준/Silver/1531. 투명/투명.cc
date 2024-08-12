#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int n, m;
  int board[101][101] = {
      0,
  };

  int result = 0;
  int x1, x2, y1, y2;
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    cin >> x1 >> y1 >> x2 >> y2;
    for (int j = x1; j <= x2; j++)
    {
      for (int k = y1; k <= y2; k++)
      {
        board[j][k]++;
      }
    }
  }

  for (int i = 0; i <= 100; i++)
    for (int j = 0; j <= 100; j++)
      if (board[i][j] > m)
        result++;

  cout << result << "\n";
  return 0;
}