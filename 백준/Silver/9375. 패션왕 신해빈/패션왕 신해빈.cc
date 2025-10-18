#include <bits/stdc++.h>
using namespace std;
int tc, n;
string s1, s2;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> tc;
  while (tc--)
  {
    map<string, int> mp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cin >> s1 >> s2;
      mp[s2]++;
    }
    long long res = 1;
    for (auto c : mp)
    {
      res *= ((long long)c.second + 1);
    }
    res--;
    cout << res << "\n";
  }
  return 0;
}