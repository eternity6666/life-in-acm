#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 5;
struct node{
    int x;
    int y;
    int w;
}v[maxn * maxn];

bool com(const node& a, const node& b)
{
    return a.w < b.w;
}

int n, m, ans, town[maxn], height[maxn];
//int road[maxn][maxn];

void init();
int findX(int x);
void merge(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);

    while(~scanf("%d", &n) && n)
    {
        m = n * (n - 1) / 2;
        ans = 0;
        init();
        for(int i = 0; i < m; i++)
            scanf("%d %d %d", &v[i].x, &v[i].y, &v[i].w);
        sort(v, v + m, com);
        for(int i = 0; i < m; i++)
        {
            //cout << v[i].x << v[i].y << v[i].w << endl;
            if(findX(v[i].x) != findX(v[i].y))
            {
                merge(v[i].x, v[i].y);
                ans = ans + v[i].w;
                //cout << ans << endl;
            }
        }
        cout << ans << endl;
        //cout << endl;
    }
    return 0;
}

void init()
{
    for(int i = 1; i <= n; i++)
    {
        town[i] = i;
        height[i] = 0;
    }
}

int findX(int x)
{
    if(town[x] == x)
        return x;
    else
        return town[x] = findX(town[x]);
}

void merge(int x, int y)
{
    x = findX(x);
    y = findX(y);
    if(x == y)
        return ;
    if(height[x] < height[x])
    {
        town[x] = y;
    }
    else
    {
        town[y] = x;
        if(height[x] == height[y])
            height[x]++;
    }
}
