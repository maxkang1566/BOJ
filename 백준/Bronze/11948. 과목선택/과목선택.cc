#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a[4], b[2], sum = 0;
	for (int i = 0; i < 4; i++)
		cin >> a[i];
	for (int i = 0; i < 2; i++)
		cin >> b[i];

	sort(a, a + 4);
	sort(b, b + 2);
	for (int i = 3; i > 0; i--)
		sum += a[i];
	
	sum += b[1];
	cout << sum;
}