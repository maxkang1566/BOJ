#include <bits/stdc++.h>
using namespace std;

int main() {
	int angle1, angle2, angle3;
	cin >> angle1 >> angle2 >> angle3;

	int sum = angle1 + angle2 + angle3;

	if (sum == 180) {
		if (angle1 == angle2 && angle2 == angle3) {
			cout << "Equilateral";
		}
		else if (angle1 == angle2 || angle1 == angle3 || angle2 == angle3) {
			cout << "Isosceles";
		}
		else {
			cout << "Scalene";
		}
	}
	else {
		cout << "Error";
	}

	return 0;
}
