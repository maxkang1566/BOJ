#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	while (1) {
		string a;
		getline(cin, a);

		if (a == "END")
			break;

		for (int i = a.length() - 1; i >= 0; i--) {
			cout << a[i];
		}
		cout << "\n";
	}
}