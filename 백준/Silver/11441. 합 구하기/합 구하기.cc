#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int N, M, i, j;
	int num[100005];
	int psum[100005];

	cin >> N;
	for (int a = 1; a <= N; a++) {
		cin >> num[a];
		psum[a] = psum[a - 1] + num[a];
	}
	cin >> M;

	for (int a = 0; a < M; a++) {
		cin >> i >> j;
		cout << psum[j] - psum[i - 1] << "\n";
	}
}