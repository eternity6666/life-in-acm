#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;
const int inf = 0x3fffffff;
const int maxm = 10000 + 5;
int N,M,S,T,G[maxn][maxn],d[maxn];
bool v[maxn];

void Dijkstra();
bool input();

int main()
{
    freopen("in.txt", "r", stdin);

    while(input())
    {
        Dijkstra();
        cout << d[T] << endl;
    }
    return 0;
}

void Dijkstra()
{
    d[S] = 0;
    fei(1, N)
    {
        int u = -1, MIN = inf;
        fej(1, N)
        {
            if(d[j] < MIN && !v[j])
            {
                u = j;
                MIN = d[j];
            }
        }
        if(u == -1)
            return ;
        v[u] = 1;
        fej(1, N)
        {
            if(!v[j] && G[u][j] != inf && G[u][j] + d[u] < d[j])
                d[j] = d[u] + G[u][j];
        }
    }
}

bool input()
{
    if(~scanf("%d %d %d %d", &N, &M, &S, &T))
    {
        fei(1, N)
        {
            v[i] = 0;
            d[i] = inf;
            fej(1, N)
                G[i][j] = inf;
        }

        fei(1, M)
        {
            int u, v, l;
            scanf("%d %d %d", &u, &v, &l);
            if(G[u][v] > l)
                G[u][v] = G[v][u] = l;
        }
        return true;
    }
    return false;
}

/*
#include <bits/stdc++.h>
#include <iostream>
#include <cstdio>
#include <set>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 1000 + 5;

int road[maxn][maxn];
int N, M, S, T, ans;
int d[maxn];
bool v[maxn];

bool input();
void got_ans();

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        got_ans();
        ans = d[T];
        cout << ans << endl;
    }
    return 0;
}

void got_ans()
{
    set<int> s;
    set<int>::iterator it;
    s.insert(S);
    v[S] = 1;
    while(!s.empty())
    {
        int mins, minl = maxn;
        for(it = s.begin(); it != s.end(); it++)
        {
            int tmps, tmpl, tmp = *it;
            tmpl = maxn;
            // cout << tmp << endl;
            fei(1, N)
            {
                if(road[tmp][i] == maxn || d[i] != maxn)
                    continue;
                else
                {
                    if(road[tmp][i] <= tmpl)
                    {
                        tmpl = road[tmp][i];
                        tmps = i;
                    }
                }
            }
            if(minl >= d[tmp] + tmpl)
            {
                mins = tmps;
                minl = tmpl + d[tmp];
            }
        }
        s.insert(mins);
        d[mins] = minl;
        if(mins == T)
            return ;
    }
    
}

bool input()
{
    if(~scanf("%d %d %d %d", &N, &M, &S, &T))
    {
        ans = 0;
        int u,v,l;
        fei(1, N)
        {   
            d[i] = maxn;
            fej(1, N)
                road[i][j] = maxn;
        }
        d[S] = 0;
        fei(1, M)
        {
            cin >> u >> v >> l;
            if(l < road[u][v])
                road[u][v] = l;
            if(l < road[v][u])
                road[v][u] = l;
        }
        return true;
    }
    return false;
}
*/

/*
#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
using namespace std;
const int maxn = 1000 + 5;
const int maxm = 10000 + 5;

struct edge{
    int u, v, l;
}es[maxm];

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
*/
