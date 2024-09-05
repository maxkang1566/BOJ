#include <bits/stdc++.h>
using namespace std;

int d[100005];
int arr[100005];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
    cin >> arr[i];

  for (int i = 1; i <= n; i++)
  {
    d[i] = max(0, d[i - 1]) + arr[i];
  }
  cout << *max_element(d + 1, d + n + 1);

  return 0;
}