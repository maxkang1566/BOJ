#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main(void)
{
	int input, answer;
	cin >> input;

#if defined(_MSC_VER)
	answer = __popcnt(input);
#else
	answer = __builtin_popcount(input);
#endif

	cout << answer << endl;
}