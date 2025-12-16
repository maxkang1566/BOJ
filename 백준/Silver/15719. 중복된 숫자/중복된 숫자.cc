#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  ll n, x, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    sum += x;
  }

  ll expected = (n - 1) * n / 2;
  cout << sum - expected << "\n";
}