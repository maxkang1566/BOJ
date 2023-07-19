#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int add(int* arr, int index)
{
	int sum = 0;
	for (int i = 0; i <= index; i++) {
		sum += arr[i];
	}
	return sum;
}

int main(void)
{
	cin.tie(0);
	ios::sync_with_stdio(0);

	int n, result = 0;
	cin >> n;
	int* arr = new int[n];

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	sort(arr, arr + n);
	
	for (int i = 0; i < n; i++) {
		result += add(arr, i);
	}

	cout << result << endl;

	return 0;
}