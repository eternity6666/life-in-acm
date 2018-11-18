#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 15;
const int INF = 0x3fffffff;

int n, m, s, ans;
long long c;

bool v[maxn][maxn];
int one[maxn][maxn];
int g[maxn][maxn];
int d[maxn][maxn];

void init();
void dijkstra();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d %d", &n, &m, &s))
    {
        init();
        fei(1, m)
        {
            int u, v, l;
            scanf("%d %d %d", &u, &v, &l);
            // cout << u << v << l << endl;
            if(g[u][v] > l)
                g[u][v] = g[v][u] = l;
        }
        
        dijkstra();

        printf("%d %lld\n", ans, c);
        // cout << endl;
    }
    return 0;
}

void dijkstra()
{
    fei(1, n)
    {
        long long tmp = 0;
        fej(1, n)
        {
            int u = -1, MIN = INF;
            fek(1, n)
            {
                if(!v[i][k] && d[i][k] < MIN)
                {
                    u = k;
                    MIN = d[i][k];
                }
            }

            if(u == -1)
                break;
            v[i][u] = 1;

            fek(1, n)
                if(!v[i][k] && g[u][k] != INF && d[i][u] + g[u][k] < d[i][k])
                {
                    d[i][k] = d[i][u] + g[u][k];
                    tmp += d[i][k];
                    one[i][k]++;
                    one[i][u]++;
                }
        }
        long long tmp2 = 0;
        fej(1, n)
        {
            cout << one[i][j];
            if(one[i][j] == 1)
                tmp2++;
        }
        cout << endl;
        tmp = tmp + tmp2 * s;
        if(tmp < ans)
            ans = tmp, c = 1;
        else if(tmp == ans)
            c++;
    }
}

void init()
{
    ans = INF;
    c = 0;
    fei(1, n)
        fej(1, n)
        {
            one[i][j] = 0;
            v[i][j] = 0;
            if(i != j)
                g[i][j] = d[i][j] = INF;
            else
                g[i][j] = d[i][j] = 0;
        }
}

