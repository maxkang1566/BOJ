#include <bits/stdc++.h>
using namespace std;

int n;
int h[33000];
long long result = 0;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> h[i];

  result += 2 * n;
  result += h[0];
  result += h[n - 1];

  for (int i = 1; i < n; i++)
    result += abs(h[i] - h[i - 1]);

  for (int i = 0; i < n; i++)
    result += h[i] * 2;

  cout << result;

  return 0;
}