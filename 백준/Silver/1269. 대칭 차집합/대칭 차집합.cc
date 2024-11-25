#include <bits/stdc++.h>
using namespace std;

unordered_set<int> a;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, m;
  cin >> n >> m;

  while (n--)
  {
    int num;
    cin >> num;
    a.insert(num);
  }

  while (m--)
  {
    int num;
    cin >> num;
    if (a.find(num) == a.end())
      a.insert(num);
    else
      a.erase(num);
  }

  cout << a.size();
  return 0;
}