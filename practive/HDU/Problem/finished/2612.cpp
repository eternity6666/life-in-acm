#include <bits/stdc++.h>
#define ff(i, a, b) for(int (i) = (a); (i) <= (b); ++(i))
using namespace std;
const int inf = 0x3f3f3f3f;
struct node
{
    int x,y,s;
    node(){}
    node(int x, int y, int s){
        this->x = x;
        this->y = y;
        this->s = s;
    }
}tmp;

int n, m;
char maze[205][205];
int kfc[2][205][205];
int vis[205][205];
int dx[] = {0,-1,0,1};
int dy[] = {1,0,-1,0};

void bfs(int x, int y, int k)
{
    memset(vis, 1, sizeof(vis));
    queue<node> q;
    vis[x][y] = 0;
    tmp.x = x, tmp.y = y, tmp.s = 0;

    q.push(tmp);
    while(!q.empty())
    {
        tmp = q.front(); q.pop();
        if(maze[tmp.x][tmp.y] == '@')
            kfc[k][tmp.x][tmp.y] = tmp.s;
        // cout << tmp.x << " " << tmp.y << " " << tmp.s << endl;
        ff(i, 0, 3)
        {
            int nx = tmp.x + dx[i];
            int ny = tmp.y + dy[i];
            if(nx > 0 && nx <= n)
                if(ny > 0 && ny <= m)
                    if(vis[nx][ny])
                        if(maze[nx][ny] != '#')
                        {
                            vis[nx][ny] = 0;
                            q.push(node(nx, ny, tmp.s + 1));
                        }
        }
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie();
    while(cin >> n >> m)
    {
        int yx, yy, mx, my;
        int ans = inf;
        ff(i, 1, n)
            ff(j, 1, m)
            {
                cin >> maze[i][j];
                if(maze[i][j] == 'Y') yx = i, yy = j;
                else if(maze[i][j] == 'M') mx = i, my = j;
            }
        bfs(yx, yy, 0);
        bfs(mx, my, 1);
        ff(i, 1, n)
            ff(j, 1, m)
                if(maze[i][j] == '@' && kfc[0][i][j] && kfc[1][i][j])
                    ans = min(ans, kfc[0][i][j] + kfc[1][i][j]);
        cout << ans * 11 << endl;
    }
}

