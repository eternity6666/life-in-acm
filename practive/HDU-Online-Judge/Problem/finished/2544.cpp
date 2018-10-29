#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int INF = 0x3fffffff;
const int MAXN = 100 + 5;

int N,M,G[MAXN][MAXN],d[MAXN];
bool v[MAXN];

bool input();
void Dijkstra(int s);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        if(M == 0)
            cout << 0 << endl;
        else
        {
            Dijkstra(1);
            cout << d[N] << endl;
        }
    }
    return 0;
}

void Dijkstra(int s)
{
    d[s] = 0;
    fei(1,N)
    {
        int u = -1, MIN = INF;
        fej(1,N)
            if(!v[j] && d[j] < MIN)
                u = j, MIN = d[j];

        if(u == -1)
            return;

        v[u] = 1;

        fej(1, N)
            if(!v[j] && G[u][j] != INF && d[j] > d[u] + G[u][j])
                d[j] = d[u] + G[u][j];
    }
}

bool input()
{
    if(~scanf("%d %d", &N, &M))
    {
        if(N == 0 && M == 0)
            return false;
        fei(1, N)
        {
            d[i] = INF;
            v[i] = 0;
            fej(1, N)
                G[i][j] = INF;
        }
        fei(1,M)
        {
            int a, b, c;
            scanf("%d %d %d", &a, &b, &c);
            if(G[a][b] > c)
            {
                G[a][b] = G[b][a] = c;
                if(a == 1)
                    d[b] = c;
                if(b == 1)
                    d[a] = c;
            }
        }
        return true;
    }
    return false;
}
