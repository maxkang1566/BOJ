#include <bits/stdc++.h>
using namespace std;

long long d[35][35];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  d[0][0] = 1;
  for (int i = 1; i <= 33; i++)
  {
    d[i][0] = d[i][i] = 1;
    for (int j = 1; j < i; j++)
      d[i][j] = (d[i - 1][j] + d[i - 1][j - 1]);
  }
  int n, m;
  cin >> n >> m;
  cout << d[n - 1][m - 1];
  return 0;
}