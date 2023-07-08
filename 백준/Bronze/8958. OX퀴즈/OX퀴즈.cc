#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

void startGame() {
	int score = 0, streak = 1;
	char arr[80];

	cin >> arr;

	for (int i = 0; i < strlen(arr); i++) {
		if (arr[i] == 'O') {
			score += streak;
			streak++;
		}
		else if (arr[i] == 'X') {
			streak = 1;
		}
	}

	cout << score << endl;
}

int main(void)
{
	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		startGame();
	
	return 0;
}