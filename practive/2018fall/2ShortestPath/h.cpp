#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 10000 + 5;
const int inf = 0x3fffffff;

int n,m,s,t,g[maxn][maxn],d[maxn];
bool v[maxn];

bool input();
void SPFA();

int main()
{
    freopen("in.txt", "r", stdin);

    while(input())
    {
        SPFA();
    }
    return 0;
}

void SPFA()
{
    queue<node> q;
    node tmp;
    tmp.s = s;
    tmp.t = 0;
    q.push(tmp);

    while(!q.empty())
    {

    }
}

bool input()
{
    if(~scanf("%d %d %d %d", &n, &m, &s, &t))
    {
        fei(1, n)
        {
            d[i] = inf;
            v[i] = 0;
            fej(1, n)
                g[i][j] = inf;
        }
        fei(1, m)
        {
            int u,v,l;
            scanf("%d %d %d %d", &u, &v, &l);
            if(g[u][v] > l)
                g[u][v] = g[v][u] = l;
        }
        return true;
    }
    return false;
}
