#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  int k, l;
  cin >> k >> l;

  unordered_map<string, int> sign{};
  for (int i = 0; i < l; i++)
  {
    string student;
    cin >> student;
    sign[student] = i;
  }

  vector<pair<string, int>> student_list(sign.begin(), sign.end());
  sort(student_list.begin(), student_list.end(), [](auto &a, auto &b)
       { return a.second < b.second; });
  int temp = min(k, (int)student_list.size());

  for (int i = 0; i < temp; i++)
    cout << student_list[i].first << "\n";
  return 0;
}