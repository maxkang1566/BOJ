#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int n, m;
int tree[1000005];

bool solve(int x)
{
  ll cnt = 0;
  for (int i = 0; i < n; i++)
  {
    if (tree[i] <= x)
      continue;
    cnt += (tree[i] - x);
  }
  return cnt >= m;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
    cin >> tree[i];

  sort(tree, tree + n);

  ll st = 0;
  ll en = *max_element(tree, tree + n);

  while (st < en)
  {
    int mid = (st + en + 1) / 2;
    if (solve(mid))
      st = mid;
    else
      en = mid - 1;
  }

  cout << st << "\n";
  return 0;
}