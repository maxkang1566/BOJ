#include <bits/stdc++.h>
using namespace std;
int n;
int arr[100005];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int ans = -1;

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  sort(arr, arr + n);
  for (int i = 1; i <= n; i++)
    ans = max(ans, arr[n - i] * i);
  cout << ans;
  return 0;
}