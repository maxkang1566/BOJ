#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second
int board[105][105];
bool vis[105][105];
int m, n, k, mx=0;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main(void) {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    vector<int> areaArr;
    cin >> m >> n >> k;
    for(int i=0; i<k; i++) {
        int x_1, x_2, y_1, y_2;
        cin >> x_1 >> y_1 >> x_2 >> y_2;
        for(int j=y_1; j<y_2; j++)
            for(int k=x_1; k<x_2; k++)
                board[j][k]=1;
    }
    
    for(int i=0; i<m; i++) {
        for(int j=0; j<n; j++) {
            if(board[i][j] == 1 || vis[i][j]) continue;
            num++;
            queue<pair<int, int>> Q;
            vis[i][j] = 1;
            Q.push({i, j});
            int area = 0;
            while(!Q.empty()) {
                area++;
                pair<int, int> cur = Q.front(); Q.pop();
                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dx[dir];
                    int ny = cur.Y + dy[dir];
                    if(nx < 0 || nx >= m || ny < 0 || ny >= n) continue;
                    if(vis[nx][ny] || board[nx][ny] != 0) continue;
                    vis[nx][ny] = 1;
                    Q.push({nx, ny});
                }
            }
            areaArr.push_back(area);
        }
    }

    cout << num << "\n";
    sort(areaArr.begin(), areaArr.end());
    
    for(int i=0; i<areaArr.size(); i++)
        cout<<areaArr[i]<<" ";

    return 0;
}