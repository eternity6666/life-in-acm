#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 5;

struct node{
    int u, v, w;
}village[5000];
int pre[maxn], height[maxn];

void init(int n);
bool cmp(const node& a, const node& b);
int findX(int x);
bool merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n)
    {
        int m = n * (n - 1) / 2;
        init(n);
        
        for(int i = 0; i < m; i++)
        {
            int a, b;
            scanf("%d %d %d %d", &village[i].u, &village[i].v, &a, &b);
        //  cin >> village[i].u >> village[i].v >> a >> b;
            if(b == 1)
                village[i].w = 0;
            else if(b == 0)
                village[i].w = a;
        }

        sort(village, village + m, cmp);
        
        int ans = 0;
        for(int i = 0; i < m; i++)
        {
            if(merge(village[i].u, village[i].v))
            {
                ans = ans + village[i].w;
            }
        }

        cout << ans << endl;
    }
    return 0;
}

void init(int n)
{
    for(int i = 1; i <= n; i++)
    {
        pre[i] = i;
        height[i] = 0;
    }
}

int findX(int x)
{
    return pre[x] == x ? x : pre[x] = findX(pre[x]);
}

bool merge(int a, int b)
{
    a = findX(a);
    b = findX(b);
    if(a != b)
    {
        if(height[a] < height[b])
        {
            pre[a] = b;
        }
        else
        {
            pre[b] = a;
            if(height[a] == height[b])
                height[b]++;
        }
        return true;
    }
    return false;
}

bool cmp(const node& a, const node& b)
{
    return a.w < b.w;
}
