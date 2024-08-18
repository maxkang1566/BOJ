#include <bits/stdc++.h>
using namespace std;

int t;

void solve()
{
  vector<int> a, b;
  int n, m, temp, ans = 0;
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    a.push_back(temp);
  }
  for (int i = 0; i < m; i++)
  {
    cin >> temp;
    b.push_back(temp);
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());

  for (int i = 0; i < a.size(); i++)
  {
    for (int j = 0; j < b.size(); j++)
    {
      if (a[i] > b[j])
        ans++;
    }
  }

  cout << ans << "\n";
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> t;
  for (int i = 0; i < t; i++)
    solve();

  return 0;
}