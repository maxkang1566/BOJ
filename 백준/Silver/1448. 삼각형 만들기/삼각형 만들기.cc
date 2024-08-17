#include <bits/stdc++.h>
using namespace std;
int N, temp, maxLen = -1;
int check[1000005];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> N;

  vector<int> arr(N);

  for (int i = 0; i < N; i++)
  {
    cin >> temp;
    if (check[temp] < 3)
    {
      arr.push_back(temp);
      check[temp]++;
    }
  }

  sort(arr.begin(), arr.end());

  for (int i = 0; i < arr.size() - 2; i++)
  {
    if (arr[i] + arr[i + 1] > arr[i + 2])
    {
      maxLen = max(maxLen, arr[i] + arr[i + 1] + arr[i + 2]);
    }
    if (i == *arr.end() && maxLen == 0)
    {
      maxLen = -1;
    }
  }

  if (maxLen > 0)
    cout << maxLen << "\n";
  else
    cout << "-1" << "\n";

  return 0;
}