#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		
		for (int i = 0; i < str.length(); i++) {
			str[i] = tolower(str[i]);
		}
		cout << str << "\n";
	}
}