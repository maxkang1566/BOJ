#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

int main(void)
{
	char arr[20];
	
	cin >> arr;
	if (strcmp(arr, "SONGDO") == 0)
		cout << "HIGHSCHOOL" << endl;
	else if (strcmp(arr, "CODE") == 0)
		cout << "MASTER" << endl;
	else if (strcmp(arr, "2023") == 0)
		cout << "0611" << endl;
	else if (strcmp(arr, "ALGORITHM") == 0)
		cout << "CONTEST" << endl;

	return 0;
}