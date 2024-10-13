#include <bits/stdc++.h>
using namespace std;

int d[1005][1005];
int mod = 10007;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  for (int i = 1; i <= 1000; i++)
  {
    d[i][0] = d[i][i] = 1;
    for (int j = 1; j < i; j++)
      d[i][j] = (d[i - 1][j] + d[i - 1][j - 1]) % mod;
  }
  int n, m;
  cin >> n >> m;
  cout << d[n][m];
  return 0;
}