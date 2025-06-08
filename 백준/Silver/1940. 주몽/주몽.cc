#include <bits/stdc++.h>
using namespace std;
int n, m, res = 0;
int arr[15003];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  cin >> m;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (arr[i] + arr[j] == m)
        res++;
    }
  }
  cout << res << "\n";
  return 0;
}