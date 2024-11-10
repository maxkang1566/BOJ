#include <bits/stdc++.h>
using namespace std;
#define X first
#define Y second

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        vector<pair<int, int>> point(4);
        for (int i = 0; i < 4; i++)
            cin >> point[i].X >> point[i].Y;

        sort(point.begin(), point.end());

        int d1 = pow(point[0].X - point[1].X, 2) + pow(point[0].Y - point[1].Y, 2);
        int d2 = pow(point[0].X - point[2].X, 2) + pow(point[0].Y - point[2].Y, 2);
        int d3 = pow(point[0].X - point[3].X, 2) + pow(point[0].Y - point[3].Y, 2);
        int d4 = pow(point[1].X - point[2].X, 2) + pow(point[1].Y - point[2].Y, 2);
        int d5 = pow(point[1].X - point[3].X, 2) + pow(point[1].Y - point[3].Y, 2);
        int d6 = pow(point[2].X - point[3].X, 2) + pow(point[2].Y - point[3].Y, 2);

        vector<int> distances = {d1, d2, d3, d4, d5, d6};
        sort(distances.begin(), distances.end());

        if (distances[0] == distances[1] && distances[1] == distances[2] && distances[2] == distances[3] &&
            distances[4] == distances[5] && distances[0] > 0 && distances[4] == 2 * distances[0])
            cout << 1 << "\n"; 
        else
            cout << 0 << "\n"; 
    }

    return 0;
}
