#include <bits/stdc++.h>
using namespace std;
string a, b;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int tc;
  cin >> tc;
  while (tc--)
  {
    map<string, int> _map;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> a >> b;
      _map[b]++;
    }
    long long ret = 1;
    for (auto c : _map)
    {
      ret *= ((long long)c.second + 1);
    }
    ret--;
    cout << ret << "\n";
  }

  return 0;
}