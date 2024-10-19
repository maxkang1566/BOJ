#include <bits/stdc++.h>
using namespace std;

int arr1[500005];
int arr2[500005];
vector<int> result;
int sum = 0;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b;
  cin >> a >> b;
  for (int i = 0; i < a; i++)
    cin >> arr1[i];
  for (int i = 0; i < b; i++)
    cin >> arr2[i];

  sort(arr1, arr1 + a);
  sort(arr2, arr2 + b);

  for (int i = 0; i < a; i++)
  {
    if (!binary_search(arr2, arr2 + b, arr1[i]))
    {
      result.push_back(arr1[i]);
      sum++;
    }
  }
  if (sum == 0)
  {
    cout << "0" << "\n";
    return 0;
  }
  else
  {
    cout << sum << "\n";
    for (int i = 0; i < result.size(); i++)
      cout << result[i] << " ";
  }

  return 0;
}