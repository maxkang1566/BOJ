#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[105][105];
bool vis[105][105]={};
int n, mx=0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> board[i][j];

    for(int height=0; height<101; height++) {
        int num = 0;
        for(int temp = 0; temp < 105; temp++)
            fill(vis[temp], vis[temp] + 105, 0);

        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(board[i][j]<=height || vis[i][j]) continue;
                num++;
                queue<pair<int, int>> Q;
                vis[i][j] = 1;
                Q.push({i, j});
                while(!Q.empty()) {
                    pair<int, int> cur = Q.front(); Q.pop();
                    for(int dir = 0; dir < 4; dir++) {
                        int nx = cur.X + dx[dir];
                        int ny = cur.Y + dy[dir];
                        if(nx < 0 || nx > n || ny < 0 || ny > n) continue;
                        if(vis[nx][ny] || board[nx][ny] <= height) continue;
                        vis[nx][ny] = 1;
                        Q.push({nx, ny});
                    }
                }
                mx = max(mx, num);
            }
        }
    }

    cout << mx << '\n';

    return 0;
}