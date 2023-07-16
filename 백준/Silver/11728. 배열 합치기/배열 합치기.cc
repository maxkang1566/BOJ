#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int n, m, index, index_1 = 0, index_2 = 0;

	cin >> n >> m;
	index = n+m;
	int* arr1 = new int[n+1];
	int* arr2 = new int[m+1];

	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < m; i++) {
		cin >> arr2[i];
	}

	while (index_1 < n && index_2 < m) {
		if (arr1[index_1] <= arr2[index_2]) {
			cout << arr1[index_1++] << " ";
		}
		else {
			cout << arr2[index_2++] << " ";
		}
	}
	while (index_1 < n)
		cout << arr1[index_1++] << " ";

	while (index_2 < m)
		cout << arr2[index_2++] << " ";

	return 0;
}