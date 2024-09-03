#include <bits/stdc++.h>
using namespace std;

int arr[505][505];
int d[505][505];
int ans = -1;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
      cin >> arr[i][j];
  }

  d[0][0] = arr[0][0];

  for (int i = 1; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      if (j == 0)
        d[i][j] = d[i - 1][j] + arr[i][j];
      else if (j == i)
        d[i][j] = d[i - 1][j - 1] + arr[i][j];
      else
        d[i][j] = max(d[i - 1][j - 1], d[i - 1][j]) + arr[i][j];
    }
  }

  for (int i = 0; i < n; i++)
  {
    if (ans < d[n - 1][i])
      ans = d[n - 1][i];
  }

  cout << ans;
  return 0;
}