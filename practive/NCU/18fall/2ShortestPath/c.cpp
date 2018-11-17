#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 500 + 5;
int F,N,M,W,g[maxn][maxn],d[maxn];
bool ans = 0, v[maxn];

int main()
{
    freopen("in.txt", "r", stdin);

    scanf("%d", &F);
    while(F--)
    {
        input();
    }
    return 0;
}

void input()
{
    ans = 0;

    scanf("%d %d %d", &N, &M, &W);

    fei(1,N)
    {
        d[i] = INF;
        v[i] = 0;
        fej(1,N)
            g[i][j] = INF;
    }

    fei(1,M)
    {
        int s,e,t;
        scanf("%d %d %d", &s, &e, &t);
        if(g[s][e] > t)
            g[s][e] = g[e][s] = t;
    }

    fei(1,W)
    {
        int s, e, t;
        scanf("%d %d %d", &s, &e, &t);
        t = -t;
        if(g[s][e] > t)
            g[s][e] = t;
    }
}

