#include <bits/stdc++.h>
#define X first
#define Y second
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  pair<int, int> point[3];
  for (int i = 0; i < 3; i++)
    cin >> point[i].X >> point[i].Y;

  sort(point, point + 3);

  bool collinear = false;
  if (point[1].X != point[0].X && point[2].X != point[1].X)
  {
    double slope1 = (double)(point[1].Y - point[0].Y) / (point[1].X - point[0].X);
    double slope2 = (double)(point[2].Y - point[1].Y) / (point[2].X - point[1].X);
    collinear = (slope1 == slope2);
  }
  else if (point[1].X == point[0].X && point[2].X == point[1].X)
  {
    collinear = true;
  }

  if (collinear)
    cout << "WHERE IS MY CHICKEN?" << "\n";
  else
    cout << "WINNER WINNER CHICKEN DINNER!" << "\n";

  return 0;
}
