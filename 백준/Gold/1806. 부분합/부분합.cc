#include <bits/stdc++.h>
using namespace std;
int n, s;
int arr[100005];
int mn = 0x7fffffff;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> s;
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int en = 0, tot = arr[0];
  for (int st = 0; st < n; st++)
  {
    while (en < n && tot < s)
    {
      en++;
      if (en != n)
        tot += arr[en];
    }
    if (en == n)
      break;

    mn = min(mn, en - st + 1);
    tot -= arr[st];
  }
  if (mn == 0x7fffffff)
    mn = 0;
  cout << mn;
  return 0;
}