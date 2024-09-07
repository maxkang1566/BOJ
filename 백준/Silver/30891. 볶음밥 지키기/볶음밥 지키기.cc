#include <bits/stdc++.h>
using namespace std;

struct Point
{
  int x, y;
};

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, r;
  cin >> n >> r;

  vector<Point> rice(n);
  for (int i = 0; i < n; i++)
  {
    cin >> rice[i].x >> rice[i].y;
  }

  int max_count = 0;
  Point best = {0, 0};

  for (int x = -100; x <= 100; x++)
  {
    for (int y = -100; y <= 100; y++)
    {
      int cnt = 0;

      for (const auto &grain : rice)
      {
        int dx = x - grain.x;
        int dy = y - grain.y;
        if (dx * dx + dy * dy <= r * r)
          cnt++;
      }
      if (cnt > max_count)
      {
        max_count = cnt;
        best = {x, y};
      }
    }
  }

  cout << best.x << " " << best.y << "\n";
  return 0;
}