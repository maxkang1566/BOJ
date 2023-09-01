#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int a, b, c;
	cin >> a >> b >> c;
	
	if (a*b - c >= 0) {
		cout << a*b - c;
	}
	else
		cout << "0";
}