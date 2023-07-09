#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

int main(void)
{
	char arr[101];
	bool check;
	cin >> arr;

	for (char j = 'a'; j <= 'z'; j++) {
		check = false;
		for (int i = 0; i < strlen(arr); i++) {
			if (arr[i] == j) {
				cout << i << " ";
				check = true;
				break;
			}
		}

		if (check == false) {
			cout << "-1 ";
		}
	}

	
	return 0;
}