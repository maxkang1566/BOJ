#include <bits/stdc++.h>
using namespace std;

int board[505][505] = {
    0,
};

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, result = 0;
  cin >> n;
  while (n--)
  {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    for (int i = x1; i < x2; i++)
      for (int j = y1; j < y2; j++)
        board[i][j] = 1;
  }

  for (int i = 0; i <= 500; i++)
    for (int j = 0; j <= 500; j++)
      result += board[i][j];

  cout << result << "\n";

  return 0;
}