#include <iostream>
#include <utility>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 15;
const int inf = 0x3f3f3f3f;
typedef pair<int, int> P;

int n, m, num;
char maze[maxn][maxn];
int d[maxn][maxn];
bool used[maxn][maxn];
P rec[105];
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

int bfs(P x, P y)
{
    memset(used, 1, sizeof(used));
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= m; ++j)
            d[i][j] = inf;

    queue<P> q;
    q.push(x);
    d[x.first][x.second] = 0;
    used[x.first][x.second] = 0;
    q.push(y);
    d[y.first][y.second] = 0;
    used[y.first][y.second] = 0;

    P tmp;
    while(!q.empty())
    {
        tmp = q.front();
        q.pop();

        for(int i = 0; i < 4; ++i)
        {
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];
            if(nx > 0 && nx <= n)
                if(ny > 0 && ny <= m)
                    if(used[nx][ny] && maze[nx][ny] != '.')
                    {
                        used[nx][ny] = 0;
                        d[nx][ny] = d[tmp.first][tmp.second] + 1;
                        q.push(P(nx, ny));
                    }
        }
    }

    for(int i = 0; i < num; i++)
        if(d[rec[i].first][rec[i].second] == inf)
            return inf;
    return d[tmp.first][tmp.second];
}

int main()
{
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    int tt = 1;
    while(t--)
    {
        cin >> n >> m;
        num = 0;
        int ans = inf;
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= m; ++j)
            {
                cin >> maze[i][j];
                if(maze[i][j] == '#')
                    rec[num].first = i, rec[num++].second = j;
            }
        if(num <= 1)
            ans = 0;
        else
        {
            for(int i = 0; i < num; ++i)
                for(int j = i + 1; j < num; ++j)
                    ans = min(ans, bfs(rec[i], rec[j]));
            ans = (ans == inf ? -1 : ans);
        }
        printf("Case %d: %d\n", tt++, ans);
    }
    return 0;
}

