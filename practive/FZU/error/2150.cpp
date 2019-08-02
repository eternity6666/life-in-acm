#include <iostream>
#include <cstring>
#include <queue>
#include <utility>
using namespace std;
const int maxn = 15;
const int inf = 0x3f3f3f3f;
typedef pair<int, int> P;

int num;
int n, m;
char maze[maxn][maxn];
P rec[105];
int d[maxn][maxn];
bool used[maxn][maxn];
int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int bfs(P x, P y)
{
    queue<P > q;
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            d[i][j] = inf;

    memset(used, 0, sizeof(used));
    q.push(x);
    d[x.first][x.second] = 0;
    used[x.first][x.second] = 1;
    q.push(y);
    d[y.first][y.second] = 0;
    used[y.first][y.second] = 1;
    P tmp;
    cout << x.first << ',' << x.second << ' ' << y.first << ',' << y.second << endl;
    while(!q.empty())
    {
        tmp = q.front();
        q.pop();
        for(int i = 0; i < 4; i++)
        {
            int nx = tmp.first + dx[i];
            int ny = tmp.second + dy[i];
            if(nx >= 1 && nx <= n)
                if(ny >= 1 && ny <= m)
                    if(!used[nx][ny] && maze[nx][ny] != '.')
                    {
                        used[nx][ny] = 1;
                        q.push(P(nx, ny));
                        d[nx][ny] = d[tmp.first][tmp.second] + 1;
                    }
        }
    }
    for(int i = 0; i < num; ++i)
        if(d[rec[i].first][rec[i].second] == inf)
            return inf;
    return d[tmp.first][tmp.second];
}

int main()
{
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    int t;
    cin >> t;
    for(int tt = 1; tt <= t; tt++)
    {
        int ans = inf;
        cin >> n >> m;
        num = 0;
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= m; j++)
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
        printf("Case %d: %d\n", tt, ans);
    }

    return 0;
}

