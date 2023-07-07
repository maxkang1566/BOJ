#include <iostream>

using namespace std;

int main(void)
{
	int n;
	int numOfTwo, numOfFive;
	cin >> n;

	if (n == 1) {
		cout << "-1" << endl;
		return 0;
	}
	if (n == 3) {
		cout << "-1" << endl;
		return 0;
	}

	if ((n % 5) % 2 == 0) {
		numOfFive = n / 5;
		n = n - numOfFive * 5;
		numOfTwo = n / 2;
		cout << numOfTwo + numOfFive << endl;
		return 0;
	} 
	else if ((n % 5) % 2 == 1) {
		numOfFive = n / 5 - 1;
		n = n - numOfFive * 5;
		numOfTwo = n / 2;
		cout << numOfTwo + numOfFive << endl;
		return 0;
	}
}