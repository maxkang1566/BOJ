#include <bits/stdc++.h>
using namespace std;

int n;
typedef struct
{
  string name;
  int kor, eng, math;
} student;

student arr[100005];

bool cmp(const student &a, const student &b)
{
  if (a.kor != b.kor)
    return a.kor > b.kor;
  if (a.eng != b.eng)
    return a.eng < b.eng;
  if (a.math != b.math)
    return a.math > b.math;

  return a.name < b.name;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  cin >> n;
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i].name >> arr[i].kor >> arr[i].eng >> arr[i].math;
  }
  sort(arr, arr + n, cmp);
  for (int i = 0; i < n; i++)
    cout << arr[i].name << "\n";

  return 0;
}