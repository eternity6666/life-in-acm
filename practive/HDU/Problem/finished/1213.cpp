#include <bits/stdc++.h>
using namespace std;
const int maxn = 1000 + 5;

int pre[maxn], h[maxn];

void init(int n);
int findX(int x);
void merge(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);

    while(t--)
    {
        int n, m;
        cin >> n >> m;

        init(n);

        for(int i = 0; i < m; i++)
        {
            int a, b;
            scanf("%d %d", &a, &b);
            merge(a, b);
        }

        int ans = 0;
        for(int i = 1; i <= n; i++)
        {
            if(pre[i] == i)
            {
                ans++;
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
        h[i] = 0;
    }
}

int findX(int x)
{
    return pre[x] == x ? x : pre[x] = findX(pre[x]);
}

void merge(int a, int b)
{
    a = findX(a);
    b = findX(b);
    if(h[a] < h[b])
    {
        pre[a] = b;
    }
    else
    {
        pre[b] = a;
        if(h[a] == h[b])
            h[a]++;
    }
}
