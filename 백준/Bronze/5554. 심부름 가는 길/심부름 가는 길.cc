#include <bits/stdc++.h>
using namespace std;

int main(void)
{
	int a, sum = 0, temp;
	for (int i = 0; i < 4; i++) {
		cin >> a;
		sum += a;
	}
	temp = sum / 60;
	cout << temp << "\n" << sum - temp * 60;
	
}