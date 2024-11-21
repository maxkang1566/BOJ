#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n, result = 0;
  cin >> n;
  while (n--)
  {
    int a, b;
    cin >> a >> b;
    result += (a * b);
  }

  cout << result << "\n";

  return 0;
}