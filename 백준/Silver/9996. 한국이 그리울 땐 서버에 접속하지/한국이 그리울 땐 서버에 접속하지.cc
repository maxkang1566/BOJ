#include <bits/stdc++.h>
using namespace std;
int n;
string s, pattern, pre, suf;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int star;

  cin >> n;
  cin >> pattern;
  int pos = pattern.find('*');
  pre = pattern.substr(0, pos);
  suf = pattern.substr(pos + 1);
  for (int i = 0; i < n; i++)
  {
    cin >> s;
    if (pre.size() + suf.size() > s.size())
      cout << "NE\n";
    else
    {
      if (pre == s.substr(0, pre.size()) && suf == s.substr(s.size() - suf.size()))
        cout << "DA\n";
      else
        cout << "NE\n";
    }
  }

  return 0;
}