#include <bits/stdc++.h>
using namespace std;
#define prev maxkang
int n, o, a, b, asum, bsum;
string s, prev;

string print(int a)
{
  string d = "00" + to_string(a / 60);
  string e = "00" + to_string(a % 60);
  return d.substr(d.size() - 2, 2) + ":" + e.substr(e.size() - 2, 2);
}
int changeToInt(string a)
{
  return atoi(a.substr(0, 2).c_str()) * 60 + atoi(a.substr(3, 2).c_str());
}
void solve(int &sum, string s)
{
  sum += (changeToInt(s) - changeToInt(prev));
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> o >> s;
    if (a > b)
      solve(asum, s);
    else if (a < b)
      solve(bsum, s);

    o == 1
        ? a++
        : b++;
    prev = s;
  }
  if (a > b)
    solve(asum, "48:00");
  else if (a < b)
    solve(bsum, "48:00");
  cout << print(asum) << "\n";
  cout << print(bsum) << "\n";
  return 0;
}