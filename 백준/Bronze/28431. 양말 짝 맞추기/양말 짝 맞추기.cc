#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int arr[5];
  for (int i = 0; i < 5; i++)
    cin >> arr[i];

  for (int i = 0; i < 5; i++)
  {
    for (int j = i + 1; j < 5; j++)
    {
      if (arr[i] == arr[j])
      {
        arr[i] = -1;
        arr[j] = -1;
      }
    }
  }
  for (int i = 0; i < 5; i++)
  {
    if (arr[i] != -1)
      cout << arr[i];
  }

  return 0;
}