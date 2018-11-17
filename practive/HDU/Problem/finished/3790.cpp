#include <iostream>
using namespace std;
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)

const int maxn = 1000 + 5;
const int INF = 0x3fffffff;
struct node
{
    int g, c;
};
int n, m, s, t;
node g[maxn][maxn], d[maxn];
bool v[maxn];

void init();
void dijkstra();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &n, &m) && n + m)
    {
        init();

        fei(1,m)
        {
            int a, b, d, p;
            scanf("%d %d %d %d", &a, &b, &d, &p);
            if(g[a][b].g > d)
                g[a][b].g = g[b][a].g = d, g[a][b].c = g[b][a].c = p;
        }
        scanf("%d %d", &s, &t);
        dijkstra();
        cout << d[t].g << " " << d[t].c << endl;
    }
    return 0;
}

void dijkstra()
{
    d[s].g = d[s].c = 0;
    fei(1,n)
    {
        int u = -1, MING = INF, MINC = INF;
        fej(1, n)
            if(!v[j])
                if(d[j].g < MING)
                    u = j, MING = d[j].g, MINC = d[j].c;
                else if(d[j].g == MING && d[j].c < MINC)
                    u = j, MING = d[j].g, MINC = d[j].c;

        if(u == -1)
            return ;
        
        v[u] = 1;

        fej(1, n)
            if(!v[j] && g[u][j].g != INF)
            {
                int tmpg = g[u][j].g + d[u].g;
                int tmpc = g[u][j].c + d[u].c;
                if(tmpg < d[j].g)
                    d[j].g = tmpg, d[j].c = tmpc;
                else if(tmpg == d[j].g && tmpc < d[j].c)
                    d[j].c = tmpc, d[j].g = tmpg;
            }
    }
}

void init()
{
    fei(1, n)
    {
        d[i].g = d[i].c = INF;
        v[i] = 0;
        fej(1, n)
            g[i][j].g = g[i][j].c = INF;
    }
}
