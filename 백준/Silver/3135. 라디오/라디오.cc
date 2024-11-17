#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int a, b, n;
  cin >> a >> b >> n;

  int min_moves = abs(a - b); 

  for (int i = 0; i < n; i++)
  {
    int fav;
    cin >> fav;
    min_moves = min(min_moves, abs(fav - b) + 1); 
  }

  cout << min_moves;
  return 0;
}