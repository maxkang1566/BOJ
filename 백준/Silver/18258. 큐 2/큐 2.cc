#include <iostream>
#include <queue>
#include <vector>
#include <string>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	queue<int> Q;
	cin >> n;

	while (n--) {
		string q;
		cin >> q;
		if (q == "push") {
			int x;
			cin >> x;
			Q.push(x);
		}
		else if(q=="pop") {
			if (Q.empty())
				cout << "-1" << "\n";
			else {
				cout << Q.front() << "\n";
				Q.pop();
			}
		}
		else if (q == "size") {
			cout << Q.size() << "\n";
		}
		else if (q == "empty") {
			if (Q.empty())
				cout << "1" << "\n";
			else
				cout << "0" << "\n";
		}
		else if (q == "front") {
			if (Q.empty())
				cout << "-1" << "\n";
			else
				cout << Q.front() << "\n";
		}
		else if (q == "back") {
			if (Q.empty())
				cout << "-1" << "\n";
			else
				cout << Q.back() << "\n";
		}
	}
} 