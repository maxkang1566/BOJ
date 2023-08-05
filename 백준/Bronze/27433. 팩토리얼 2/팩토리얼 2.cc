#include <iostream>
using namespace std;
typedef long long ll;

int main(void)
{
	ll n, ans=1;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		ans *= i;
	}
	cout << ans;
}