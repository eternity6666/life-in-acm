#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;
const int INF = 0x3fffffff;
int T,N,g[maxn][maxn],d[maxn];
bool v[maxn];

bool input();
void Dijkstra();

int main()
{
    freopen("in.txt", "r", stdin);

    while(input())
    {
        Dijkstra();

        cout << d[N] << endl;
    }
    return 0;
}

void Dijkstra()
{
    d[1] = 0;
    fei(1,N)
    {
        int u = -1, MIN = INF;
        fej(1,N)
            if(!v[j] && d[j] < MIN)
                u = j, MIN = d[j];

        if(u == -1)
            return ;
        
        v[u] = 1;

        fej(1,N)
            if(!v[j] && g[u][j] != INF && d[u] + g[u][j] < d[j])
                d[j] = d[u] + g[u][j];
    }
}

bool input()
{
    if(~scanf("%d %d", &T,&N))
    {
        fei(1,N)
        {
            d[i] = INF;
            v[i] = 0;
            fej(1,N)
                g[i][j] = INF;
        }

        fei(1,T)
        {
            int u,v,l;
            scanf("%d %d %d", &u,&v,&l);
            if(g[u][v] > l)
                g[u][v] = g[v][u] = l;
        }
        return true;
    }
    return false;
}
