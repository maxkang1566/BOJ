#include <bits/stdc++.h>
using namespace std;

int probLevel[100002];
set<int> probByLevel[102];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n;
  while (n--)
  {
    int p, l;
    cin >> p >> l;
    probLevel[p] = l;
    probByLevel[l].insert(p);
  }
  cin >> m;
  while (m--)
  {
    string cmd;
    cin >> cmd;
    if (cmd == "recommend")
    {
      int x;
      cin >> x;
      if (x == 1)
      {
        for (int i = 100; i >= 0; i--)
        {
          if (probByLevel[i].empty())
            continue;
          cout << *(prev(probByLevel[i].end())) << "\n";
          break;
        }
      }

      else if (x == -1)
      {
        for (int i = 0; i < 101; i++)
        {
          if (probByLevel[i].empty())
            continue;
          cout << *probByLevel[i].begin() << "\n";
          break;
        }
      }
    }
    else if (cmd == "add")
    {
      int p, l;
      cin >> p >> l;
      probLevel[p] = l;
      probByLevel[l].insert(p);
    }
    else if (cmd == "solved")
    {
      int p;
      cin >> p;
      probByLevel[probLevel[p]].erase(p);
    }
  }
  return 0;
}