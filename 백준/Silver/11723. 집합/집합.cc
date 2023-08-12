#include <bits/stdc++.h>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);

	int M; cin >> M;
	int S = 0;
	while (M--) {
		string cmd; int x;
		cin >> cmd;
		if (cmd == "add") {
			cin >> x;
			S |= 1 << x - 1;
		}
		else if (cmd == "remove") {
			cin >> x;
			S &= ~(1 << x - 1);
		}
		else if (cmd == "check") {
			cin >> x;
			if (S & 1 << x - 1) cout << 1 << '\n';
			else cout << 0 << '\n';
		}
		else if (cmd == "toggle") {
			cin >> x;
			if (S & 1 << x - 1) S &= ~(1 << x - 1);
			else S |= 1 << x - 1;
		}
		else if (cmd == "all") {
			S = (1 << 20) - 1;
		}
		else if (cmd == "empty") {
			S = 0;
		}
	}
	return 0;
}