#include <bits/stdc++.h>
using namespace std;

int h, w;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> h >> w;
  vector<string> s(h);
  vector<vector<int>> ret(h, vector<int>(w, -1));
  for (int i = 0; i < h; i++)
  {
    cin >> s[i];
  }

  for (int i = 0; i < h; i++)
  {
    int lastCloudPos = -1;
    for (int j = 0; j < w; j++)
    {
      if (s[i][j] == 'c')
      {
        ret[i][j] = 0;
        lastCloudPos = j;
      }
      else if (lastCloudPos != -1)
      {
        ret[i][j] = j - lastCloudPos;
      }
    }
  }

  for (int i = 0; i < h; i++)
  {
    for (int j = 0; j < w; j++)
    {
      cout << ret[i][j] << " ";
    }
    cout << "\n";
  }
}