#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t, v, e;
  cin >> t;
  while (t--)
  {
    cin >> v >> e;
    cout << 2 + e - v << "\n";
  }

  return 0;
}