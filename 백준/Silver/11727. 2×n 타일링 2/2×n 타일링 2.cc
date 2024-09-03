#include <bits/stdc++.h>
using namespace std;

int d[1005];
int mod = 10007;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  d[0] = 0;
  d[1] = 1;
  d[2] = 3;
  for (int i = 3; i <= 1000; i++)
    d[i] = (d[i - 1] + d[i - 2] * 2) % mod;

  cout << d[n] % 10007 << "\n";

  return 0;
}