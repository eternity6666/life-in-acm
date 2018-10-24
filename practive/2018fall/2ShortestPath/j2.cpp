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

