#include <bits/stdc++.h>
using namespace std;

int result = 0;
double r;

double distance(int x1, int y1, int x2, int y2)
{
  double dist = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
  return dist <= r;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int w, h, x, y, p;

  cin >> w >> h >> x >> y >> p;
  r = h / 2;

  for (int i = 0; i < p; i++)
  {
    int a, b;
    cin >> a >> b;

    if (a >= x && a <= x + w && b >= y && b <= y + h)
      result++;
    else if (distance(a, b, x, y + r))
      result++;
    else if (distance(a, b, x + w, y + r))
      result++;
  }

  cout << result;
  return 0;
}