#include <bits/stdc++.h>
using namespace std;

int main(void)
{
  ios::sync_with_stdio(0);
  cin.tie(0);

  while (1)
  {
    bool chk = true;
    string s;
    stack<char> stk;
    getline(cin, s);
    if (s == ".")
      break;

    for (char i : s)
    {
      if (i == '(' || i == '[')
        stk.push(i);
      else if (i == ')')
      {
        if (stk.empty() || stk.top() != '(')
        {
          chk = false;
          break;
        }
        stk.pop();
      }
      else if (i == ']')
      {
        if (stk.empty() || stk.top() != '[')
        {
          chk = false;
          break;
        }
        stk.pop();
      }
    }
    if (!stk.empty())
      chk = false;

    if (chk)
      cout << "yes" << "\n";
    else
      cout << "no" << "\n";
  }
  return 0;
}