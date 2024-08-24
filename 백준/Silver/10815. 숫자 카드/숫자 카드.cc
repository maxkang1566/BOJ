#include <bits/stdc++.h>
using namespace std;
int n, m;
int arr1[500005], arr2[500005];
int check[500005] = {
    0,
};

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
    cin >> arr1[i];

  cin >> m;

  for (int i = 0; i < m; i++)
    cin >> arr2[i];

  sort(arr1, arr1 + n);

  for (int i = 0; i < m; i++)
  {
    if (binary_search(arr1, arr1 + n, arr2[i]))
      cout << "1 ";
    else
      cout << "0 ";
  }

  return 0;
}