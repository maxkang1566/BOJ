#include <bits/stdc++.h>
using namespace std;

unordered_set<string> s;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n;
  cin >> n;
  while (n--)
  {
    string name, log;
    cin >> name >> log;
    if (log == "enter")
      s.insert(name);
    else
      s.erase(name);
  }
  vector<string> answer(s.begin(), s.end());
  sort(answer.begin(), answer.end(), greater<string>());
  for (auto x : answer)
    cout << x << "\n";
  return 0;
}