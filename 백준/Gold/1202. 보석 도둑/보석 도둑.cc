#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
pair<int, int> jewel[300002]; // {가격, 무게};
multiset<int> bag;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, k;
  ll price = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
    cin >> jewel[i].second >> jewel[i].first;
  sort(jewel, jewel + n);

  for (int i = 0; i < k; i++)
  {
    int c;
    cin >> c;
    bag.insert(c);
  }

  for (int i = n - 1; i >= 0; i--)
  {
    int m, v;
    tie(v, m) = jewel[i];
    auto it = bag.lower_bound(m);
    if (it == bag.end())
      continue;
    price += v;
    bag.erase(it);
  }
  cout << price << "\n";
  return 0;
}