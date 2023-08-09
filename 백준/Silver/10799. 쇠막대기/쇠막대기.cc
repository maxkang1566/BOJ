#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int count = 0;

	string a;
	cin >> a;
	stack<char> s;
	int size = a.length();

	for (int i = 0; i < size; i++) {
		if (a[i] == '(')
			s.push(a[i]);
		else {
			if (a[i - 1] == '(') {
				s.pop();
				count += s.size();
			}
			else {
				s.pop();
				count++;
			}
		}
	}
	cout << count << "\n";
	return 0;
}