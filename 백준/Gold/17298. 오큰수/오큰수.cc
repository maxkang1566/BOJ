#include <bits/stdc++.h>
using namespace std;
int arr[1000004], ret[1000004], n;
stack<int> s;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n;
  fill(ret, ret + 1000004, -1);
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    while (s.size() && arr[s.top()] < arr[i])
    {
      ret[s.top()] = arr[i];
      s.pop();
    }
    s.push(i);
  }

  for (int i = 0; i < n; i++)
    cout << ret[i] << " ";
}