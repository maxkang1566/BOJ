#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  priority_queue<int, vector<int>, greater<>> pq;

  int n, loop;
  cin >> n;
  loop = n * n;
  while (loop--)
  {
    int x;
    cin >> x;
    pq.push(x);
    if (n < pq.size())
      pq.pop();
  }
  cout << pq.top() << "\n";
}