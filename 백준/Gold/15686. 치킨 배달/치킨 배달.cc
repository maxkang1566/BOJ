#include <bits/stdc++.h>
using namespace std;

#define X first
#define Y second

int board[51][51]; // 입력부
int n, m;
vector<pair<int, int>> chicken; // 치킨집의 좌표
vector<pair<int, int>> home;    // 집의 좌표

/*
치킨집 중에서 최대 M개를 고를 때 치킨거리의 최소를 구하려면, 직관적으로 치킨집을 M개를 남겨두어야 함
*/

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> board[i][j];
      if (board[i][j] == 1)
        home.push_back({i, j});
      if (board[i][j] == 2)
        chicken.push_back({i, j});
    }
  }
  vector<int> brute(chicken.size(), 1);
  fill(brute.begin(), brute.begin() + chicken.size() - m, 0);
  int mn = INT_MAX;
  do
  {
    int dist = 0;
    for (auto h : home)
    {
      int temp = INT_MAX;
      for (int i = 0; i < chicken.size(); i++)
      {
        if (brute[i] == 0)
          continue;
        temp = min(temp, abs(chicken[i].X - h.X) + abs(chicken[i].Y - h.Y));
      }
      dist += temp;
    }
    mn = min(mn, dist);
  } while (next_permutation(brute.begin(), brute.end()));

  cout << mn;
  return 0;
}