#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 3e5 +10;

int n, m;
int node[maxn];
int apple[maxn];
int x[maxn];
int k[maxn];
int c[maxn];

int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d", &n, &m);
        node[1] = -1;
        for(int i = 2; i <= n; i++)
            scanf("%d", &node[i]);
        for(int i = 1; i <= n; i++)
            scanf("%d", &apple[i]);
        for(int i = 0; i <= m; i++)
            scanf("%d%d%d", &x[i], &k[i], &c[i]);
    }
}