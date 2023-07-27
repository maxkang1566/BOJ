#define _CRT_SECURE_NO_WARNINGS
#define MAX 100005
#include <iostream>
#include <algorithm>
using namespace std;

int n, s;
int arr[MAX];

namespace cnt {
	int count;
}

void dfs(int x, int sum) {
	if (x == n) return;
	if (sum + arr[x] == s) {
		cnt::count++;
	}
	dfs(x + 1, sum);
	dfs(x + 1, sum + arr[x]);
	
}
int main(void)
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	cin >> n >> s;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	cnt::count = 0;
	dfs(0, 0);
	cout << cnt::count << endl;
	return 0;
}