#include <iostream>
#include <vector>
#include <list>
#include <string>
using namespace std;

int main(void)
{
	list<char> L;
	string s;
	char cmd, data;
	int m;

	cin >> s;
	for (auto c : s) {
		L.push_back(c);
	}
	auto cursor = L.end();

	cin >> m;
	while(m--) {
		cin >> cmd;

		if (cmd == 'L') {
			if (cursor == L.begin())
				continue;
			else
				cursor--;
		}
		else if (cmd == 'D') {
			if (cursor == L.end())
				continue;
			else
				cursor++;
		}
		else if (cmd == 'B') {
			if (cursor == L.begin())
				continue;
			else
				cursor--;
				cursor = L.erase(cursor);
		}
		else if (cmd == 'P') {
			cin >> data;
			L.insert(cursor, data);
		}
	}

	for (auto s : L) {
		cout << s;
	}
	return 0;
}