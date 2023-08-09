#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n, count = 0;
	cin >> n;

	while (n--) {
		string a;
		cin >> a;

		stack<char> s;

		for (auto c : a) {
			if (!s.empty() && s.top() == c)
				s.pop();
			else
				s.push(c);
		}

		if (s.empty())
			count++;
	}
	cout << count << "\n";
}