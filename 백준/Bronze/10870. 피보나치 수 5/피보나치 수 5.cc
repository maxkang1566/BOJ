#include <bits/stdc++.h>
using namespace std;
int arr[21];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;

  arr[0] = 0;
  arr[1] = 1;

  for (int i = 2; i < 21; i++)
    arr[i] = arr[i - 1] + arr[i - 2];

  cin >> n;
  cout << arr[n];
}