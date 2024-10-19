#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  map<string, int> ext_count;

  for (int i = 0; i < n; i++)
  {
    string str;
    cin >> str;
    size_t pos = str.find(".");
    string ext = str.substr(pos + 1);
    ext_count[ext]++;
  }

  for (auto &p : ext_count)
    cout << p.first << " " << p.second << "\n";

  return 0;
}