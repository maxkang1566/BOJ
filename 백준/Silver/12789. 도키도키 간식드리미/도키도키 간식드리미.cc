#include <bits/stdc++.h>
using namespace std;

stack<int> s;
int n, x, now=1;

int main(void)
{
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		s.push(x);		//일단 넣어
		while (!s.empty() && s.top() == now) {
			s.pop();
			now++;
		}
	}

	printf("%s", now == n + 1 ? "Nice" : "Sad");
	return 0;
}