#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll n, result = 0;
int sumOfTime[1010] = {0}, sum2 = 0;
vector<int> partialSum;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  for (int i = 1; i <= n; i++)
  {
    int amount, temp;
    cin >> amount;
    for (int j = 0; j < amount; j++)
    {
      cin >> temp;
      sumOfTime[i] += temp;
    }
  }

  sort(sumOfTime + 1, sumOfTime + 1 + n);

  for (int i = 1; i <= n; i++)
  {
    sum2 += sumOfTime[i];
    result += sum2;
  }
  cout << result << "\n";

  return 0;
}