#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int INF = 0x3fffffff;
const int maxn = 200 + 5;

int n,m,g[maxn][maxn],d[maxn],s,t;
bool v[maxn];

void init();
void dijkstra();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &n, &m))
    {
        init();

        fei(1, m)
        {
            int a, b, x;
            scanf("%d %d %d", &a, &b, &x);
            if(g[a][b] > x)
                g[a][b] = g[b][a] = x;
        }
        scanf("%d %d",&s, &t);

        dijkstra();
        if(d[t] != INF) 
            cout << d[t] << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}

void dijkstra()
{
    d[s] = 0;
    fei(0,n - 1)
    {
        int u = -1, MIN = INF;
        fej(0,n-1)
            if(!v[j] && d[j] < MIN)
                u = j, MIN = d[j];

        if(u == -1)
            return ;

        v[u] = 1;

        fej(0,n-1)
            if(!v[j] && g[u][j] != INF && g[u][j] + d[u] < d[j])
                d[j] = g[u][j] + d[u];
    }
}

void init()
{
    fei(0, n-1)
    {
        d[i] = INF;
        v[i] = 0;
        fej(0, n-1)
            g[i][j] = INF;
    }
}
