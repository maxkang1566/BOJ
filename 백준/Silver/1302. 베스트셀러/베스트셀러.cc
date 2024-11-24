#include <bits/stdc++.h>
using namespace std;

map<string, int> book;
int n;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int max = 0;
  string ans;

  cin >> n;
  while (n--)
  {
    string s;
    cin >> s;
    if (book.find(s) == book.end())
      book.insert({s, 1});
    else
      book[s]++;
  }

  for (auto &i : book)
  {
    if (i.second > max)
      ans = i.first, max = i.second;
  }
  cout << ans << "\n";

  return 0;
}