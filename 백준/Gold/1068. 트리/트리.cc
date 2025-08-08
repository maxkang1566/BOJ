#include <bits/stdc++.h>
using namespace std;
int n, root, ret = 0, target;
vector<int> adj[55];
int visited[55];
int parent[55];

void preOrder(int here)
{
  if (here == target)
  {
    return;
  }
  if (visited[here] == 0)
  {
    visited[here] = 1;

    bool is_leaf = true;
    for (int child : adj[here])
    {
      if (child != target)
      {
        is_leaf = false;
        break;
      }
    }
    if (adj[here].empty() || is_leaf)
    {
      ret++;
    }
    for (int child : adj[here])
    {
      if (child != target)
      {
        preOrder(child);
      }
    }
  }
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    int idx;
    cin >> idx;
    if (idx == -1)
    {
      root = i;
    }
    else
    {
      adj[idx].push_back(i);
    }
  }
  cin >> target;
  if (target == root)
  {
    cout << 0 << "\n";
    return 0;
  }
  preOrder(root);
  cout << ret << "\n";

  return 0;
}