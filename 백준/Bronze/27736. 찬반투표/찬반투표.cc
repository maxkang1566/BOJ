#include <iostream>
#include <cstdlib>

using namespace std;

int main(void)
{
	int n, giveup = 0, sum=0;
	cin >> n;
	
	int* arr = (int*)malloc(sizeof(int)*n);

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
	}

	if (giveup > n / 2) {
		cout << "INVALID" << endl;
		return 0;
	}

	if (sum > 0)
		cout << "APPROVED" << endl;
	else if (sum < 0 || sum==0)
		cout << "REJECTED" << endl;

}