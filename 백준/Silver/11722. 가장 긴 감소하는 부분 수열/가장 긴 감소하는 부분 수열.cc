#include <bits/stdc++.h>
using namespace std;

int n;
int arr[1005], d[1005];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  fill(d, d + n, 1);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < i; j++)
      if (arr[j] > arr[i])
        d[i] = max(d[i], d[j] + 1);

  cout << *max_element(d, d + n);

  return 0;
}