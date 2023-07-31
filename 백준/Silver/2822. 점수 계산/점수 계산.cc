#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
using namespace std;

int main(void)
{
	int score[8], score_temp[8];
	int num[5], idx = 0, sum = 0;;

	for (int i = 0; i < 8; i++) {
		cin >> score[i];
		score_temp[i] = score[i];
	}
	sort(score, score + 8);

	for (int i = 7; i >= 3; i--) {
		sum += score[i];
	}

	for (int i = 7; i >=3; i--) {
		for (int j = 0; j < 8; j++) {
			if (score[i] == score_temp[j]) {
				num[idx] = j+1;
				idx++;
			}
		}
	}
	sort(num, num + idx);

	cout << sum << "\n";
	for (int i = 0; i < 5; i++) {
		cout << num[i] << " ";
	}
}