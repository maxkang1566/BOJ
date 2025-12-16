#include <bits/stdc++.h>
using namespace std;
int n, temp, ret;
int arr[10000004];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> temp;
    arr[temp]++;
    if (arr[temp] > 1)
    {
      ret = temp;
      break;
    }
  }
  cout << ret << "\n";
  return 0;
}