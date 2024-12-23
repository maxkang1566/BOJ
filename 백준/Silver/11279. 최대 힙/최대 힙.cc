#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  priority_queue<int> pq;
  int n;
  cin >> n;
  while (n--)
  {
    int x;
    cin >> x;
    if (x == 0)
    {
      if (!pq.empty())
      {
        cout << pq.top() << "\n";
        pq.pop();
      }
      else
        cout << "0\n";
    }
    else
      pq.push(x);
  }

  return 0;
}