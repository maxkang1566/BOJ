#include <iostream>
#include <deque>
using namespace std;

int main(void)
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	deque<pair<int, int>> d;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;

		while (!d.empty() && d.back().second >= num)
			d.pop_back();

		d.push_back({ i, num });

		if (d.front().first <= i - m)
			d.pop_front();

		cout << d.front().second << " ";
	}
}