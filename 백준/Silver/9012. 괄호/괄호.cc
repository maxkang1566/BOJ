#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool wellMatched(const string& fomula) {
	const string opening("("), closing(")");
	stack<char> openStack;

	for (int i = 0; i < fomula.size(); ++i) {
		if (opening.find(fomula[i]) != -1)
			openStack.push(fomula[i]);
		else {
			if (openStack.empty())
				return false;
			if (opening.find(openStack.top()) != closing.find(fomula[i]))
				return false;
			openStack.pop();
		}
	}

	return openStack.empty();
}

int main(void)
{
	int T;
	cin >> T;
	
	for (int i = 1; i <= T; i++) {
		string s;
		cin >> s;
		
		if (wellMatched(s))
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}