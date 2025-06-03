#include <bits/stdc++.h>
using namespace std;
int a, b, c, sum = 0, car[101];

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  cin >> a >> b >> c;

  for (int i = 0; i < 3; i++)
  {
    int start, end;
    cin >> start >> end;
    for (int j = start; j < end; j++)
      car[j]++;
  }

  for (int i = 0; i < 100; i++)
  {
    if (car[i] == 1)
      sum += a;
    if (car[i] == 2)
      sum += b * 2;
    if (car[i] == 3)
      sum += c * 3;
  }

  cout << sum << "\n";
  return 0;
}