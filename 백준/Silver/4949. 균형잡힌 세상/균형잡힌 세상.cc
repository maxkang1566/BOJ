#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true) {
		string a;
		getline(cin, a);
		if (a == ".") {
			break;
		}
		stack<char> s;
		bool check = true;

		for (auto c : a) {
			if (c == '(' || c == '[')
				s.push(c);

			if (c == ')') {
				if (s.empty() || s.top() != '(') {
					check = false;
					break;
				}
				s.pop();
			}
			if (c == ']') {
				if (s.empty() || s.top() != '[') {
					check = false;
					break;
				}
				s.pop();
			}
		}

		if (!s.empty())
			check = false;
		if (check)
			cout << "yes\n";
		else
			cout << "no\n";

	}
}