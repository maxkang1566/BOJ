#include <bits/stdc++.h>
using namespace std;
unordered_set<string> s;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, num;
  string game;
  cin >> n >> game;
  if (game == "Y")
    num = 1;
  else if (game == "F")
    num = 2;
  else if (game == "O")
    num = 3;
  while (n--)
  {
    string player;
    cin >> player;
    if (s.find(player) == s.end())
      s.insert(player);
  }

  cout << s.size() / num << "\n";
  return 0;
}