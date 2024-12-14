#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, q, t, cur = 1;
  set<int> hong;
  cin >> n >> q;

  for (int i = 1; i <= n; i++)
  {
    cin >> t;
    if (t)
      hong.insert(i);
  }

  while (q--)
  {
    cin >> t;
    switch (t)
    {
    case 1:
      cin >> t;
      if (hong.find(t) != hong.end())
        hong.erase(t);
      else
        hong.insert(t);
      break;

    case 2:
      cin >> t;
      cur = (cur + t - 1) % n + 1;
      break;

    case 3:
      if (hong.empty())
        cout << -1 << "\n";
      else
      {
        auto it = hong.lower_bound(cur);
        if (it != hong.end())
          cout << *it - cur << "\n";
        else
          cout << n - cur + *hong.begin() << "\n";
      }
    }
  }
  return 0;
}