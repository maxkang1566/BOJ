#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  priority_queue<int, vector<int>, greater<int>> pq;
  int n, ans = 0;
  cin >> n;

  while (n--)
  {
    int x;
    cin >> x;
    pq.push(x);
  }

  while (pq.size() > 1)
  {
    int a = pq.top();
    pq.pop();
    int b = pq.top();
    pq.pop();
    ans += a + b;
    pq.push(a + b);
  }
  cout << ans;
  return 0;
}