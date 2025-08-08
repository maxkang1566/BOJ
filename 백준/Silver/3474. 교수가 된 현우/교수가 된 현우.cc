#include <bits/stdc++.h>
using namespace std;
int t, n;
void solve()
{
  cin >> n;
  int temp;
  int cnt_2 = 0, cnt_5 = 0;

  for (int i = 2; i <= n; i *= 2)
    cnt_2 += n / i;

  for (int i = 5; i <= n; i *= 5)
    cnt_5 += n / i;

  cout << min(cnt_2, cnt_5) << "\n";
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> t;
  for (int i = 0; i < t; i++)
    solve();
}