#include <bits/stdc++.h>
using namespace std;
int ans = 0;
bool check[101][101];

void func()
{
  int x1, x2, y1, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  for (int i = 0; i < x2; i++)
    for (int j = 0; j < y2; j++)
      if (x1 <= i && i < x2 && y1 <= j && j < y2)
        if (!check[i][j])
          check[i][j] = 1;
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  for (int i = 0; i < 4; i++)
    func();

  for (int i = 0; i < 101; i++)
    for (int j = 0; j < 101; j++)
      if (check[i][j])
        ans++;

  cout << ans << "\n";
  return 0;
}