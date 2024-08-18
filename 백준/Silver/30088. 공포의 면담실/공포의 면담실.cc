#include <bits/stdc++.h>
using namespace std;

int n, result = 0;
vector<int> sumOfTime;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;
  while (n--)
  {
    int amount, temp, sum = 0;
    cin >> amount;
    for (int i = 0; i < amount; i++)
    {
      cin >> temp;
      sum += temp;
    }
    sumOfTime.push_back(sum);
  }
  sort(sumOfTime.begin(), sumOfTime.end());

  int index = 0;

  for (int i = 0; i < sumOfTime.size(); i++)
  {
    for (int j = 0; j <= index; j++)
    {
      result += sumOfTime[j];
    }
    index++;
  }
  cout << result << "\n";

  return 0;
}