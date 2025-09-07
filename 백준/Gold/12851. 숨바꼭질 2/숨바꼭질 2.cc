#include <bits/stdc++.h>
using namespace std;
const int MAX = 200000;
int visited[MAX + 5];
long long cnt[MAX + 5];
int n, k;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> k;
  if (n == k)
  {
    puts("0");
    puts("1");
    return 0;
  }
  visited[n] = 1;
  cnt[n] = 1;
  queue<int> q;
  q.push(n);
  while (!q.empty())
  {
    int now = q.front();
    q.pop();
    for (int next : {now - 1, now + 1, now * 2})
    {
      if (0 <= next && next <= MAX)
      {
        if (!visited[next])
        {
          q.push(next);
          visited[next] = visited[now] + 1;
          cnt[next] += cnt[now];
        }
        else if (visited[next] == visited[now] + 1)
        {
          cnt[next] += cnt[now];
        }
      }
    }
  }

  cout << visited[k] - 1 << '\n';
  cout << cnt[k] << '\n';
  return 0;
}