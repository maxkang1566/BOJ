#include <bits/stdc++.h>
using namespace std;

int arr[100010];

int main(void)
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, temp;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);
	temp = arr[0];

	cout << arr[0] << " ";
	for (int i = 0; i < n; i++) {
		if (temp != arr[i]) {
			cout << arr[i]<<" ";
			temp = arr[i];
		}
		else {
			continue;
		}
	}
}