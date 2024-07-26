#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  string board;
  getline(cin, board);
  vector<pair<int, int>> xlist;

  int temp = 0;
  int start = -1;

  for (int i = 0; i < board.size(); i++)
  {
    if (board[i] == 'X')
    {
      if (start == -1)
        start = i;
      temp++;
    }
    else
    {
      if (temp > 0)
      {
        xlist.push_back({start, temp});
        temp = 0;
        start = -1;
      }
    }
  }

  if (temp > 0)
    xlist.push_back({start, temp}); // 마지막 연속된 'X' 처리

  for (const auto &p : xlist)
  {
    int startIdx = p.first;
    int len = p.second;

    if (len % 2 != 0)
    {
      cout << "-1" << "\n";
      return 0;
    }

    while (len > 0)
    {
      if (len >= 4)
      {
        board.replace(startIdx, 4, "AAAA");
        startIdx += 4;
        len -= 4;
      }
      else if (len >= 2)
      {
        board.replace(startIdx, 2, "BB");
        startIdx += 2;
        len -= 2;
      }
    }
  }

  cout << board << "\n";
  return 0;
}
