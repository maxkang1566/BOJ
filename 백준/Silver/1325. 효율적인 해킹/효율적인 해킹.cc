#include <bits/stdc++.h>
using namespace std;
int n, m, a, b;
int visited[10001], nodeCnt[10001], mx;
vector<int> adj[10001];

int dfs(int here)
{
  visited[here] = 1;
  int ret = 1;
  for (int there : adj[here])
  {
    if (visited[there])
      continue;
    ret += dfs(there);
  }
  return ret;
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  while (m--)
  {
    cin >> a >> b;
    adj[b].push_back(a);
  }
  for (int i = 1; i <= n; i++)
  {
    fill(visited, visited + 10001, 0);
    nodeCnt[i] = dfs(i);
    mx = max(nodeCnt[i], mx);
  }
  for (int i = 1; i <= n; i++)
  {
    if (nodeCnt[i] == mx)
      cout << i << " ";
  }

  return 0;
}