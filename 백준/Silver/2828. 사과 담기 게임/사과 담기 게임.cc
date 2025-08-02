#include <bits/stdc++.h>
using namespace std;
int n, m, j, st, tail, ret = 0;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  cin >> j;
  st = 1;
  tail = m;
  for (int i = 1; i <= j; i++)
  {
    int pos, len;
    cin >> pos;
    if (tail < pos)
    {
      len = pos - tail;
      ret += len;
      st += len;
      tail += len;
    }
    else if (pos < st)
    {
      len = st - pos;
      ret += len;
      st -= len;
      tail -= len;
    }
  }
  cout << ret << "\n";

  return 0;
}