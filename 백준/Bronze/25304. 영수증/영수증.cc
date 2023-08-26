#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int total, sum = 0, a, b, tmp;

	cin >> total;
	cin >> tmp;

	for (int i = 0; i < tmp; i++) {
		cin >> a >> b;
		sum += (a*b);
	}

	if (sum == total) cout << "Yes" << "\n";
	else cout << "No" << "\n";
}