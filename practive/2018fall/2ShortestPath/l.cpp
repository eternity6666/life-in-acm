#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int MAXN = 100 + 5;
const int INF = 0x3fffffff;
int N, M, G[MAXN][MAXN];
int ans[MAXN][MAXN];

void floyd();
void init();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &N, &M))
    {
        init();
        fei(1, M)
        {
            int u,v,l;
            scanf("%d %d %d", &u, &v, &l);
            if(G[u][v] > l)
                ans[u][v] = ans[v][u] =  G[u][v] = G[v][u] = l;
        }

        floyd();

        fei(1, N)
            fej(1, N)
                if(j != N)
                    cout << ans[i][j] << " ";
                else
                    cout << ans[i][j] << endl;
    }
    return 0;
}

void floyd()
{
    fek(1, N)
        fei(1, N)
            fej(1, N)
                if(i == j)
                    ans[i][j] = 0;
                else
                    ans[i][j] = min(ans[i][k] + ans[k][j], ans[i][j]);
}

void init()
{
    fei(1, N)
        fej(1, N)
            ans[i][j] = G[i][j] = INF;
}

