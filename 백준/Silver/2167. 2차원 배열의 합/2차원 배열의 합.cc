#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int n, m;
	int i, j, x, y;
	int k, sum=0;
	int arr[300][300];

	cin >> n >> m;

	for (int a = 0; a < n; a++) {
		for (int b = 0; b < m; b++) {
			cin >> arr[a][b];
		}
	}

	cin >> k;

	for (int temp = 0; temp < k; temp++) {
		sum = 0;
		cin >> i >> j >> x >> y;

		for (int a = 0; a < n; a++) {
			for (int b = 0; b < m; b++) {
				if ((a >= i-1 && a <= x-1) && (b >= j-1 && b <= y-1))
					sum += arr[a][b];
			}
		}
		cout << sum << endl;
	}

	return 0;
}