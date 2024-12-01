#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n;
int p, q;
unordered_map<ll, ll> num;

ll solve(ll x)
{
  if (x == 0)
    return 1;
  if (num[x])
    return num[x];

  num[x] = solve(x / p) + solve(x / q);
  return num[x];
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> p >> q;
  cout << solve(n);
  return 0;
}