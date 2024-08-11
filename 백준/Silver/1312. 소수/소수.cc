#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, n;
  cin >> a >> b >> n;

  int result = a % b;
  for (int i = 0; i < n; i++)
  {
    result *= 10;
    if (i == n - 1)
    {
      cout << result / b << "\n";
      return 0;
    }
    result %= b;
  }

  return 0;
}