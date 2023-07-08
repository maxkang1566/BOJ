#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <deque>
#include <cstring>

using namespace std;

int main(void)
{
	int n, x;
	char cmd[15];
	deque<int> temp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (strcmp(cmd, "push_back") == 0) {
			cin >> x;
			temp.push_back(x);
		}
		else if (strcmp(cmd, "push_front") == 0) {
			cin >> x;
			temp.push_front(x);
		}
		else if (strcmp(cmd, "pop_front") == 0) {
			if (temp.empty())
				cout << "-1" << endl;
			else {
				cout << temp.front() << endl;
				temp.pop_front();
			}
		}
		else if (strcmp(cmd, "pop_back") == 0) {
			if (temp.empty())
				cout << "-1" << endl;
			else {
				cout << temp.back() << endl;
				temp.pop_back();
			}
		}
		else if (strcmp(cmd, "size") == 0) {
			cout << temp.size() << endl;
		}
		else if (strcmp(cmd, "empty") == 0) {
			cout << temp.empty() << endl;
		}
		else if (strcmp(cmd, "front") == 0) {
			if (temp.empty())
				cout << "-1" << endl;
			else
				cout << temp.front() << endl;
		}
		else if (strcmp(cmd, "back") == 0) {
			if (temp.empty())
				cout << "-1" << endl;
			else
				cout << temp.back() << endl;
		}
	}
	return 0;
}