#include <bits/stdc++.h>
using namespace std;

int board[101][101];
int result = 0;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;

  while (n--)
  {
    int a, b;
    cin >> a >> b;
    for (int i = a; i < a + 10; i++)
      for (int j = b; j < b + 10; j++)
        board[i][j] = 1;
  }

  for (int i = 0; i < 100; i++)
    for (int j = 0; j < 100; j++)
      if (board[i][j] == 1)
        result++;

  cout << result;
  return 0;
}