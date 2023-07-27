#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
typedef long long ll;
typedef pair<ll, ll> pi;
vector<pi> arr;

ll func(int a, int b) {
	ll temp = 0;
	ll dist = abs(arr[a].first - arr[b].first);
	temp += dist*dist;
	dist = abs(arr[a].second - arr[b].second);
	return temp += dist*dist;
}

int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;	cin >> n;
	for (int i = 1; i <= n; i++) {
		int x, y;	cin >> x >> y;
		arr.emplace_back(pi(x, y));
	}

	ll count = 0;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			for (int k = j + 1; k < n; k++) {
				ll a = func(i, j);
				ll b = func(j, k);
				ll c = func(k, i);
				if (a < b)	swap(a, b);
				if (a < c) swap(a, c);
				if (a == b + c) count++;
			}
		}
	}
	cout << count << "\n";

	return 0;
}