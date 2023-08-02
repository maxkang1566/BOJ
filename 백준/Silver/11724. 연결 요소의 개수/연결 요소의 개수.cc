#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <list>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int here) {
	visited[here] = true;

	for (int i = 0; i < adj[here].size(); ++i) {
		int there = adj[here][i];
		if (!visited[there])
			dfs(there);
	}
}

int dfsAll() {
	int count = -1;
	visited = vector<bool>(adj.size(), false);
	for (int i = 0; i < adj.size(); ++i)
		if (!visited[i]) {
			dfs(i);
			++count;
		}

	return count;
}

int main(void)
{
	int N, M;
	int start, dest;
	cin >> N >> M;
	adj.assign(N + 1, vector<int>(0, 0));
	visited.assign(N + 1, false);

	for (int i = 0; i < M; ++i) {
		cin >> start >> dest;
		adj[start].emplace_back(dest);
		adj[dest].emplace_back(start);
	}

	cout << dfsAll() << endl;
}