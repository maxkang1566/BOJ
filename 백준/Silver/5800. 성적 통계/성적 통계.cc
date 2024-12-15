#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int k;
  cin >> k;

  for (int i = 1; i <= k; i++)
  {
    int student[51], n, gap = -1;
    cin >> n;
    for (int j = 0; j < n; j++)
      cin >> student[j];

    sort(student, student + n);
    for (int j = 1; j < n; j++)
    {
      if (student[j] - student[j - 1] > gap)
        gap = student[j] - student[j - 1];
    }

    cout << "Class " << i << "\n";
    cout << "Max " << student[n - 1] << ", Min " << student[0] << ", Largest gap " << gap << "\n";
  }

  return 0;
}