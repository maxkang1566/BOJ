#include <bits/stdc++.h>
using namespace std;

int N, M;
int arr[101][101];
int score[101], winner, maxScore = -1;
int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> N >> M;
  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cin >> arr[i][j];
    }
    sort(arr[i], arr[i] + M);
  }

  for (int j = 0; j < M; j++)
  {
    int maxCard = -1;
    vector<int> roundWinners;
    for (int i = 0; i < N; i++)
    {
      if (arr[i][j] > maxCard)
      {
        maxCard = arr[i][j];
        roundWinners.clear();
        roundWinners.push_back(i);
      }
      else if (arr[i][j] == maxCard)
        roundWinners.push_back(i);
    }
    for (int winner : roundWinners)
      score[winner]++;
  }

  for (int i = 0; i < N; i++)
  {
    if (score[i] >= maxScore)
      maxScore = score[i];
  }

  for (int i = 0; i < N; i++)
  {
    if (score[i] == maxScore)
      cout << i + 1 << " ";
  }
}