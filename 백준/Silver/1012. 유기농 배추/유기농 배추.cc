#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#include <memory.h>
using namespace std;

struct Node {
	int x, y;
};

queue<Node> q;
int direct[4][2] = { 1, 0, 0, 1, -1, 0, 0, -1 };
int map[60][60] = { 0 };
int M, N, K;

void BFS(int x, int y)
{
	map[x][y] = 0;
	q.push({ x, y });

	while (!q.empty())
	{
		Node now = q.front();
		q.pop();

		for (int t = 0; t < 4; t++) {
			int ny = now.y + direct[t][0];
			int nx = now.x + direct[t][1];

			if (ny < 0 || nx < 0 || ny >= N || nx >= M) continue;
			if (map[nx][ny] == 0)continue;

			map[nx][ny] = 0;
			q.push({ nx, ny });
		}
	}
}
void start()
{
	int xpos, ypos;
	int count = 0;
	cin >> M >> N >> K;

	for (int i = 0; i < K; i++) {
		cin >> xpos >> ypos;
		map[xpos][ypos] = 1;
	}

	for (int y = 0; y < N; y++) {
		for (int x = 0; x < M; x++) {
			if (map[x][y] == 1) {
				BFS(x, y);
				++count;
			}
		}
	}

	cout << count << '\n';
	memset(map, 0, sizeof(int) * 60 * 60);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		start();
	}

	return 0;
}
