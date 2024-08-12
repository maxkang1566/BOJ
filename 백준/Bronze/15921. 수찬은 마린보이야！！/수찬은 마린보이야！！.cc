#include <bits/stdc++.h>
using namespace std;
int n;
int arr[101];
double avg = 0, expectation = 0, result;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;

  if (n == 0)
  {
    cout << "divide by zero" << "\n";
    return 0;
  }
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
    avg += arr[i];
  }
  avg /= n;
  expectation = avg;

  if (expectation == 0)
  {
    cout << "divide by zero" << "\n";
    return 0;
  }

  result = avg / expectation;

  cout << fixed << setprecision(2) << result << "\n";
  return 0;
}