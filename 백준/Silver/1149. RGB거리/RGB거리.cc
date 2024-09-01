#include <bits/stdc++.h>
using namespace std;

int dp[1005][3];
int r[1005], g[1005], b[1005];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> r[i] >> g[i] >> b[i];
  dp[1][0] = r[1];
  dp[1][1] = g[1];
  dp[1][2] = b[1];

  for (int i = 2; i <= n; i++)
  {
    dp[i][0] = min(dp[i - 1][1], dp[i - 1][2]) + r[i];
    dp[i][1] = min(dp[i - 1][0], dp[i - 1][2]) + g[i];
    dp[i][2] = min(dp[i - 1][0], dp[i - 1][1]) + b[i];
  }
  cout << *min_element(dp[n], dp[n] + 3);
  return 0;
}