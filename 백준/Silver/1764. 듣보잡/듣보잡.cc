#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int n, m, count = 0;
	string s;
	vector<string> result;
	map<string, bool> list;
	cin >> n >> m;
	
	for (int i = 0; i < n; i++) {
		cin >> s;
		list.insert(make_pair(s, true));
	}
	for (int i = 0; i < m; i++) {
		cin >> s;
		if (list[s]) {
			result.push_back(s);
			count++;
		}
	}
	cout << count << "\n";
	sort(result.begin(), result.end());
	for (auto c : result)
		cout << c << "\n";
}