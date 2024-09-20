#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  double d, h, w, x;

  cin >> d >> h >> w;
  x = sqrt((d * d) / (w * w + h * h));

  cout << floor(h * x) << " " << floor(w * x);

  return 0;
}