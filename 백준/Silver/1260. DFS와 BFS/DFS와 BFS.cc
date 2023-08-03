#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

vector<vector<int>> adj;
vector<bool> visited;

void dfs(int here) {
	cout << here << " ";
	visited[here] = true;

	sort(adj[here].begin(), adj[here].end());
	for (int i = 0; i < adj[here].size(); ++i) {
		int there = adj[here][i];
		if (!visited[there])
			dfs(there);
	}
}

vector<int> bfs(int start) {
	vector<bool> discovered(adj.size(), false);
	queue<int> q;
	vector<int> order;
	discovered[start] = true;
	q.push(start);

	while (!q.empty()) {
		int here = q.front();
		q.pop();
		order.push_back(here);

		sort(adj[here].begin(), adj[here].end());
		for (int i = 0; i < adj[here].size(); i++) {
			int there = adj[here][i];
			if (!discovered[there]) {
				q.push(there);
				discovered[there] = true;
			}
		}
	}

	return order;
}

int main(void)
{
	int N, M, V;
	int start, dest;
	vector<int> bfs_order;

	cin >> N >> M >> V;
	adj.assign(N + 1, vector<int>(0, 0));
	visited.assign(N + 1, false);

	for (int i = 0; i < M; i++) {
		cin >> start >> dest;
		adj[start].emplace_back(dest);
		adj[dest].emplace_back(start);
	}

	dfs(V);
	cout << "\n";
	bfs_order = bfs(V);

	for (int i = 0; i < bfs_order.size(); i++) {
		cout << bfs_order[i] << " ";
	}
	
}