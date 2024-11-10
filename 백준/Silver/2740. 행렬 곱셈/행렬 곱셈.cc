#include <bits/stdc++.h>
using namespace std;

int matrix_1[101][101], matrix_2[101][101];
int ans[101][101];
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);
  int n, m, k;

  cin >> n >> m;
  for (int i = 0; i < n; i++)
    for (int j = 0; j < m; j++)
      cin >> matrix_1[i][j];

  cin >> m >> k;
  for (int i = 0; i < m; i++)
    for (int j = 0; j < k; j++)
      cin >> matrix_2[i][j];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < k; j++)
    {
      int temp = 0;
      for (int a = 0; a < m; a++)
      {
        temp += matrix_1[i][a] * matrix_2[a][j];
      }
      ans[i][j] = temp;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < k; j++)
    {
      cout << ans[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}