#include <bits/stdc++.h>
using namespace std;

string arr[1010];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int temp = 0, len;
	string a;
	cin >> a;
	
	len = a.length();
	while (!a.empty()) {
		arr[temp] = a;
		a = a.substr(1);
		temp++;
	}
	sort(arr, arr + len);
	for (int i = 0; i < len; i++) {
		cout << arr[i] << "\n";
	}
	
}