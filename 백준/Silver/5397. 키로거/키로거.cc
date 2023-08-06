#include <iostream>
#include <string>
#include <list>
#include <vector>
using namespace std;

int main(void)
{
	int tc;
	cin >> tc;

	while (tc--) {
		string s;
		list<char> L;
		cin >> s;
		auto cursor = L.begin();

		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '<'&& cursor != L.begin()) {
				cursor--;
				continue;
			}
			else if (s[i] == '>'&&cursor != L.end()) {
				cursor++;
				continue;
			}
			else if (s[i] == '-') {
				if (cursor != L.begin()) {
					cursor--;
					cursor = L.erase(cursor);
				}
				continue;
			}
			else if (s[i] != '<'&&s[i] != '>'&&s[i] != '-') {
				L.insert(cursor, s[i]);
			}

		}
		for (auto c : L)
			cout << c;

		cout << '\n';
	}
}