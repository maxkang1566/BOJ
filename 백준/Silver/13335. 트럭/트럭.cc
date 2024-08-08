#include <bits/stdc++.h>
using namespace std;
int n, w, L, answer;
queue<int> car;
int bridge[101];

bool isEmpty()
{
  for (int i = 0; i < w; i++)
    if (bridge[i])
      return false;
  return true;
}

void move()
{
  for (int i = w - 1; i > 0; --i)
    bridge[i] = bridge[i - 1];
  bridge[0] = 0;
}

int cal()
{
  int sum = 0;
  for (int i = 0; i < w; i++)
    sum += bridge[i];
  return sum;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n >> w >> L;
  while (n--)
  {
    int temp;
    cin >> temp;
    car.push(temp);
  }

  do
  {
    int temp = cal();
    if (temp <= L)
    {
      temp -= bridge[w - 1];
      move();
      if (!car.empty() && (temp + car.front() <= L))
      {
        bridge[0] = car.front();
        car.pop();
      }
    }
    answer++;
  } while (!isEmpty());

  cout << answer;
  return 0;
}