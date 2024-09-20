#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
int board[1030][1030];
ll sum[1030][1030];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n >> m;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      cin >> board[i][j];
      sum[i][j] = board[i][j] + sum[i - 1][j] + sum[i][j - 1] - sum[i - 1][j - 1];
    }
  }

  while (m--)
  {
    int x1, x2, y1, y2;
    ll result;
    cin >> x1 >> y1 >> x2 >> y2;
    result = sum[x2][y2] - sum[x1 - 1][y2] - sum[x2][y1 - 1] + sum[x1 - 1][y1 - 1];
    cout << result << "\n";
  }
  return 0;
}