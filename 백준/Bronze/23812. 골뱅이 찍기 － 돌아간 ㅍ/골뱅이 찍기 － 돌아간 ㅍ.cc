#include <bits/stdc++.h>
using namespace std;

void tiny(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
      cout << "@";
    for (int j = 0; j < n * 3; j++)
      cout << " ";
    for (int j = 0; j < n; j++)
      cout << "@";

    cout << "\n";
  }
}

void many(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n * 5; j++)
      cout << "@";

    cout << "\n";
  }
}
int main(void)
{
  int n;
  cin >> n;
  tiny(n);
  many(n);
  tiny(n);
  many(n);
  tiny(n);
}