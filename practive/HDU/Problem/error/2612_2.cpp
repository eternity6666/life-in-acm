#include <iostream>
#include <utility>
#include <queue>
#include <cstring>
#define ff(i, a, b) for(int (i) = (a); (i) <= (b); ++(i))
using namespace std;
const int maxn = 205;
const int inf = 0x3f3f3f3f;
typedef pair<int, int> P;

int n, m, num;
char maze[maxn][maxn];
int kfc[maxn][maxn];
int d[maxn][maxn];
bool used[maxn][maxn];
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

void bfs(P s)
{
    ff(i, 1, n)
        ff(j, 1, m)
            d[i][j] = inf;
    memset(used, 1, sizeof(used));
    used[s.first][s.second] = 0;
    d[s.first][s.second] = 0;

    queue<P> q;
    q.push(s);
    while(!q.empty())
    {
        s = q.front();
        // cout << s.first << " " << s.second << endl;
        q.pop();
        if(maze[s.first][s.second] == '@')
            kfc[s.first][s.second] += d[s.first][s.second];
        ff(i, 0, 3)
        {
            int nx = s.first + dx[i];
            int ny = s.second + dy[i];
            if(nx > 0 && nx <= n)
                if(ny > 0 && ny <= m)
                    if(used[nx][ny])
                        if(maze[nx][ny] != '#')
                        {
                            used[nx][ny] = 0;
                            d[nx][ny] = d[s.first][s.second] + 1;
                            q.push(P(nx, ny));
                        }
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie();
    while(cin >> n >> m)
    {
        P Y, M;
        num = 0;
        int ans = inf;
        ff(i, 1, n)
            ff(j, 1, m)
            {
                cin >> maze[i][j];
                if(maze[i][j] == 'Y')
                    Y.first = i, Y.second = j;
                else if(maze[i][j] == 'M')
                    M.first = i, M.second = j;
                else if(maze[i][j] == '@')
                    kfc[i][j] = 0;
            }
        bfs(Y);
        bfs(M);
        ff(i, 1, n)
            ff(j, 1, m)
            {
                // cout << kfc[i][j] << (j == m ? "\n" : " ");
                if(maze[i][j] == '@')
                    ans = min(ans, kfc[i][j]);
            }
        cout << ans * 11 << endl;
    }
}

