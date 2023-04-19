#include <iostream>

using namespace std;
int map[51][51] = {
    0,
};
int visited[51][51] = {
    0,
};
int T, m, n, k;

//              상      하      좌      우
int dx[4] = {0, 0, 1, -1};
int dy[4] = {-1, 1, 0, 0};
void dfs(int y, int x)
{
    visited[y][x] = 1;
    for (int i = 0; i < 4; i++)
    {
        int nx = x + dx[i];
        int ny = y + dy[i];
        if (nx > -1 && nx <= m && ny > -1 && ny <= n && map[ny][nx] == 1 && visited[ny][nx] != 1)
        {
            dfs(ny, nx);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> T;
    for (int t = 0; t < T; t++)
    {
        cin >> m >> n >> k;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                map[i][j] = 0;
                visited[i][j] = 0;
            }
        }
        for (int i = 0; i < k; i++)
        {
            int x, y;
            cin >> x >> y;
            map[y][x] = 1; // 배추잇다!!!
        }

        int num = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                if (map[i][j] == 1 && visited[i][j] == 0)
                {
                    dfs(i, j);
                    num++;
                }
            }
        }

        // 결과값 출력
        cout << num << endl;
    }

    return 0;
}