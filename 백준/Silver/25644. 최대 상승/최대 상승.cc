#include <bits/stdc++.h>
using namespace std;

int arr[200002];
int n, ans = 0, max_num = -1;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  for (int i = n - 1; i >= 0; i--)
  {
    if (arr[i] > max_num)
      max_num = arr[i];

    ans = max(ans, max_num - arr[i]);
  }
  cout << ans;
  return 0;
}