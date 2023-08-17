#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll func(ll a, ll b, ll m) {
	if (b == 1) return a%m;
	ll val = func(a, b / 2, m);
	val = val*val%m;
	if (b % 2 == 0) return val;
	return val*a%m;
}

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	ll a, b, m;
	cin >> a >> b >> m;
	cout << func(a, b, m);
}