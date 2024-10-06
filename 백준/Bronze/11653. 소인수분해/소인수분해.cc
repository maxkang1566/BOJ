#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  int n, temp = 2;
  cin >> n;

  while (1)
  {
    if (n == 1)
      break;

    if (n % temp == 0)
    {
      cout << temp << "\n";
      n /= temp;
    }
    else
      temp++;
  }
}