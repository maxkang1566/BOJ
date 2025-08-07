#include <bits/stdc++.h>
using namespace std;
int n;
int main(void)
{
  cin >> n;
  int index = 0, i = 665;
  while (index < n)
  {
    i++;
    if (to_string(i).find("666") != string::npos)
      n--;
  }
  cout << i << "\n";

  return 0;
}