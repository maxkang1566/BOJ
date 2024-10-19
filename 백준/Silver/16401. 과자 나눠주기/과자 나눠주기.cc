#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int m, n;
int snack[1000005];

bool solve(int x)
{
  if (x == 0)
    return true;
  ll cnt = 0;
  for (int i = 0; i < n; i++)
  {
    cnt += snack[i] / x;
  }
  return cnt >= m;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> m >> n;
  for (int i = 0; i < n; i++)
    cin >> snack[i];

  ll st = 0;
  ll en = *max_element(snack, snack + n);

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