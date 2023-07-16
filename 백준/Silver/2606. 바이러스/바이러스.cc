#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include <queue>
#include <vector>
using namespace std;

vector<int> e[101];
bool visit[101];
int answer = 0;

void bfs(int start)
{
	queue<int> q;
	q.push(start);
	visit[start] = true;

	while (!q.empty()) {
		int curr = q.front();
		q.pop();

		for (auto next : e[curr]) {
			if (visit[next])
				continue;
			q.push(next);
			answer++;
			visit[next] = true;
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N, E;
	cin >> N;
	cin >> E;

	for (int i = 0; i < E; i++) {
		int a, b;
		cin >> a >> b;
		e[a].push_back(b);
		e[b].push_back(a);
	}

	bfs(1);

	cout << answer << endl;

	return 0;
}