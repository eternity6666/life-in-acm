#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000 + 5;
int par[maxn];
int height[maxn];

void init(int n);
void merge(int a, int b);
int find_a(int a);

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    while(~scanf("%d", &n) && n)
    {
        init(n);
        int i = 0;
        for(scanf("%d", &m); i < m; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            merge(a, b);
        }
        int ans = 0;
        for(int i = 1; i <= n; i++)
            if(par[i] == i)
                ans++;
        cout << ans - 1 << endl;
    }
    return 0;
}

void init(int n)
{
    for(int i = 1; i <= n; i++)
    {
        par[i] = i;
        height[i] = 0;
    }
}

int find_a(int a)
{
    if(par[a] == a)
    {
        return a;
    }
    else
    {
        return par[a] = find_a(par[a]);
    }
}

void merge(int a, int b)
{
    a = find_a(a);
    b = find_a(b);
    if(a == b)
        return ;

    if(height[a] < height[b])
    {
        par[a] = b;
    }
    else
    {
        par[b] = a;
        if(height[a] == height[b])
            height[a]++;
    }
}
