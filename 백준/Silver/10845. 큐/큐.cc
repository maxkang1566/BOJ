#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cstring>
using namespace std;


int main(void)
{
	int n, x;
	char cmd[6];
	queue<int> temp;

	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> cmd;

		if (strcmp(cmd, "push") == 0) {
			cin >> x;
			temp.push(x);
		}
		else if (strcmp(cmd, "pop") == 0) {
			if (temp.empty())
				cout << "-1" << endl;
			else {
				cout << temp.front() << endl;
				temp.pop();
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