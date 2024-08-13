#include <bits/stdc++.h>
using namespace std;
int N, M, x, y, d;
int board[52][52], answer = 0;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  cin >> x >> y >> d;
  for (int i = 0; i < N; i++)
    for (int j = 0; j < M; j++)
      cin >> board[i][j];

  while (true)
  {
    if (board[x][y] == 0)
      answer++;
    board[x][y] = -1;
    bool cleaned = false;
    for (int i = 0; i < 4; i++)
    {
      d = (d + 3) % 4;
      if (board[x + dx[d]][y + dy[d]] == 0)
      {
        x += dx[d];
        y += dy[d];
        cleaned = true;
        break;
      }
    }
    if (cleaned)
      continue;
    if (board[x - dx[d]][y - dy[d]] == 1)
      break;
    x -= dx[d];
    y -= dy[d];
  }
  cout << answer;

  return 0;
}