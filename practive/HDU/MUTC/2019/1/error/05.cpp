#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e4 + 5;


struct edge{
    int x, y, c;
}g[maxn];

int d[maxn];
int v, e;

set<int> sv[maxn];

void shortest_path(int s) 
{
    fadd(i, 1, v)
    {
        d[i] = inf;
        sum[i] = 0;
    }

    d[s] = 0;
    while(true)
    {
        bool update = true;
        fadd(i, 1, e)
        {
            edge e = g[i];
            if(d[e.x] != inf)
                if(d[e.y] > d[e.x] + e.c)
                {
                    d[e.y] = d[e.x] + e.c;
                    sv[e.y].clear();
                    sv[e.y].insert(e.x);
                    update = false;
                }
                else if(d[e.y] == d[e.x] + e.c)
                    sv[e.y].insert(e.x);
        }
        if(update)
            break;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> v >> e;
        fadd(i, 1, e)
            cin >> g[i].x >> g[i].y >> g[i].c;
        shortest_path(1);
        if(d[v] == inf)
            cout << 0 << endl;
        else
        {
            fadd(i, 1, v)
            {
                set<int>::iterator it;
                int sum = 0;
                for(it = sv[i].begin(); it != sv[i].end(); it++)
                {
                    sum += g[
                }
            }
        }
    }
    return 0;
}


