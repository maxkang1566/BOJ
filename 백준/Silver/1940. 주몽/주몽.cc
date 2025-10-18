#include <bits/stdc++.h>
using namespace std;
int n, m, arr[15005];
int ret = 0;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  cin >> m;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 0; i < n; i++)
    for (int j = i + 1; j < n; j++)
      if (arr[i] + arr[j] == m)
        ret++;

  cout << ret << "\n";
  return 0;
}