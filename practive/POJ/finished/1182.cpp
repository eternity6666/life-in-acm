#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 50000 + 10;

int p[maxn];
int r[maxn];

int findX(int x)
{
    if (x == p[x])
        return x;
    int t = p[x];
    p[x] = findX(p[x]);
    r[x] = (r[x] + r[t]) % 3;
    return p[x];
}

void merge(int x, int y, int d)
{
    int xx = findX(x);
    int yy = findX(y);
    p[yy] = xx;
    r[yy] = (r[x] - r[y] + 3 + (d - 1)) % 3;
}

int main()
{
    int n, k; scanf("%d%d", &n,&k);
    for (int i = 1; i <= n; ++i)
        p[i] = i, r[i] = 0;
    int ans = 0;
    while (k--)
    {
        int d, x, y;
        scanf("%d%d%d", &d, &x, &y);
        if (x > n || y > n || (d == 2 && x == y)) ans++;
        else if (findX(x) == findX(y))
        {
            if (d == 1 && r[x] != r[y]) ans++;
            if (d == 2 && (r[x] +1)%3!=r[y]) ans++;
        }
        else merge(x, y, d);
    }
    printf("%d\n", ans);
    return 0;
}
