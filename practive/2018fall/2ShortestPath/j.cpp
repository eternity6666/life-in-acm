#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
using namespace std;
const int maxn = 1000 + 5;
const int maxm = 10000 + 5;

/*
struct edge{
    int u, v, l;
}es[maxm];
*/

int road[maxn][maxn];
int d[maxn];
int N,M,S,T;
bool v[maxn];

bool input();

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        queue<int> q;
        q.push(S);
        v[S] = 1;
        while(!q.empty())
        {
            int tmp = q.front();
            q.pop();

            // cout << tmp << endl;
            if(tmp == T)
                break;

            int tmp1 = -1, minl = maxn;
            fei(1, N)
            {
                if(!v[i] && road[tmp][i] != maxn)
                {
                    if(road[tmp][i] < minl)
                    {
                        tmp1 = i;
                        // cout << 1 << endl;
                        minl = road[tmp][i];
                    }
                }
            }
            // cout << tmp1 << endl;

            if(tmp1 == -1)
                continue;

            if(d[tmp1] > d[tmp] + minl)
            {
                d[tmp1] = d[tmp] + minl;
                q.push(tmp1);
                v[tmp1] = 1;
                // cout << 3 << endl;
            }
            // cout << 2 << endl;
        }
        cout << d[T] << endl;
    }
    return 0;
}

bool input()
{
    if(~scanf("%d %d %d %d", &N, &M, &S, &T))
    {
        // memset(road, maxn, sizeof(road));
        
        fei(1, N)
        {
            v[i] = 0;
            d[i] = maxn;
            fej(1, N)
                road[i][j] = road[j][i] = maxn;
        }
        d[S] = 0;
        fei(1, M)
        {
            // scanf("%d %d %d", &es[i].x, &es[i].y, &es[i].l);
            int u,v,l;
            scanf("%d %d %d", &u, &v, &l);
            if(road[u][v] > l)
                road[u][v] = road[v][u] = l;
            // cout << road[u][v] << road[v][u] << endl;
        }
        return true;
    }
    return false;
}
