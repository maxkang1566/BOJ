#include <iostream>
using namespace std;

int main(void)
{
	cin.tie(NULL);
	ios::sync_with_stdio(false);

	int M;
	cin >> M;

	long long sum = 0, XOR = 0;

	while (M--) {
		int q;
		cin >> q;

		if (q == 1) {
			long long x;
			cin >> x;
			sum += x;
			XOR ^= x;
		}
		if (q == 2) {
			long long x;
			cin >> x;
			sum -= x;
			XOR ^= x;
		}
		if (q == 3)
			cout << sum << "\n";
		if (q == 4)
			cout << XOR << "\n";
	}
}