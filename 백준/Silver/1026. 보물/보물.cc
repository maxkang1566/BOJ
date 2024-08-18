#include <bits/stdc++.h>
using namespace std;
int a[52], b[52], n, result = 0;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> a[i];

  for (int i = 0; i < n; i++)
    cin >> b[i];

  sort(a, a + n, greater<int>());
  sort(b, b + n);

  for (int i = 0; i < n; i++)
    result += a[i] * b[i];

  cout << result << "\n";
  return 0;
}