#include <bits/stdc++.h>
using namespace std;

bool isVowel(char c)
{
  char vowels[] = {'a', 'e', 'i', 'o', 'u'};
  for (char v : vowels)
    if (c == v)
      return true;
  return false;
}
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int result = 0;
  string s;
  cin >> s;
  for (auto i : s)
    if (isVowel(i))
      result++;
  cout << result;

  return 0;
}