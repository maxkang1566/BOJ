#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <queue>

using namespace std;

int main(void)
{
	int n, temp;
	
	queue<int> card;

	cin >> n;
	for (int i = 1; i <= n; i++)
		card.push(i);

	while (1) {
		temp = card.front();
		cout << card.front() << " ";
		card.pop();
		if (card.empty())
			break;

		card.push(card.front());
		card.pop();
	}

	//cout << temp << endl;
	return 0;
}