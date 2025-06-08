#include <bits/stdc++.h>
using namespace std;
int res;
string str;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--)
  {
    cin >> str;
    stack<char> s;
    for (char a : str)
    {
      if (s.size() && s.top() == a)
        s.pop();
      else
        s.push(a);
    }
    if (s.size() == 0)
      res++;
  }
  cout << res << "\n";
  return 0;
}