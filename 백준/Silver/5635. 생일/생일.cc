#include <bits/stdc++.h>
using namespace std;

typedef struct
{
  string name;
  int day, month, year;
} Student;

bool isYounger(const Student &a, const Student &b)
{
  if (a.year != b.year)
    return a.year > b.year;
  if (a.month != b.month)
    return a.month > b.month;
  return a.day > b.day;
}

bool isOlder(const Student &a, const Student &b)
{
  if (a.year != b.year)
    return a.year < b.year;
  if (a.month != b.month)
    return a.month < b.month;
  return a.day < b.day;
}

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int n;
  cin >> n;

  Student youngest, oldest;
  youngest.year = 0;
  oldest.year = numeric_limits<int>::max();

  for (int i = 0; i < n; i++)
  {
    Student cur;
    cin >> cur.name >> cur.day >> cur.month >> cur.year;

    if (isYounger(cur, youngest))
      youngest = cur;

    if (isOlder(cur, oldest))
      oldest = cur;
  }

  cout << youngest.name << "\n"
       << oldest.name << "\n";

  return 0;
}