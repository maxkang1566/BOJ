#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, ans = 0;
  string s;
  cin >> s;
  cin >> n;

  while (n--)
  {
    string ring;
    cin >> ring;
    ring += ring;

    if (ring.find(s) != string::npos)
      ans++;
  }

  cout << ans;
  return 0;
}