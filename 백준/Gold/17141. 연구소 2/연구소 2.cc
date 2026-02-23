#include <bits/stdc++.h>
using namespace std;
int n, m;
int dy[4] = {-1, 0, 1, 0};
int dx[4] = {0, 1, 0, -1};
int a[55][55], dist[55][55];
vector<pair<int, int>> virusList;
int ret = 987654321;
int empty_space = 0;

int solve(vector<int> &picked)
{
  fill(&dist[0][0], &dist[0][0] + 54 * 54, -1);
  queue<pair<int, int>> q;

  for (int idx : picked)
  {
    int y = virusList[idx].first;
    int x = virusList[idx].second;
    dist[y][x] = 0;
    q.push({y, x});
  }

  int infected = 0;
  int max_time = 0;

  while (q.size())
  {
    int y = q.front().first;
    int x = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int ny = y + dy[i];
      int nx = x + dx[i];

      if (ny < 0 || ny >= n || nx < 0 || nx >= n)
        continue;
      if (a[ny][nx] != 1 && dist[ny][nx] == -1)
      {
        dist[ny][nx] = dist[y][x] + 1;
        max_time = max(max_time, dist[ny][nx]);
        infected++;
        q.push({ny, nx});
      }
    }
  }

  if (infected == empty_space)
    return max_time;
  else
    return 987654321;
}

void pickVirus(int start, vector<int> &picked)
{
  if (picked.size() == m)
  {
    ret = min(ret, solve(picked));
    return;
  }

  for (int i = start; i < virusList.size(); i++)
  {
    picked.push_back(i);
    pickVirus(i + 1, picked);
    picked.pop_back();
  }
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  cin >> n >> m;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> a[i][j];
      if (a[i][j] == 2)
        virusList.push_back({i, j});
      if (a[i][j] != 1)
        empty_space++;
    }
  }
  empty_space -= m;
  vector<int> picked;
  pickVirus(0, picked);

  if (ret == 987654321)
    cout << "-1" << "\n";
  else
    cout << ret << "\n";

  return 0;
}