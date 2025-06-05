#include <bits/stdc++.h>
using namespace std;
int n, k;
int arr[1000005];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int temp = 0, result;
  cin >> n >> k;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < k; i++)
    temp += arr[i];

  result = temp;

  for (int i = 1; i < n - k + 1; i++)
  {
    temp = temp - arr[i - 1] + arr[i + k - 1];
    result = max(result, temp);
  }

  cout << result;
  return 0;
}