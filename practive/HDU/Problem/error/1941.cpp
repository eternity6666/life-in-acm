#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e4 + 10;

int f[maxn];

void init(int n)
{
    for(int i = 1; i <= n; i++)
        f[i] = i;
}

int findx(int x)
{
    return x == f[x] ? x : f[x] = findx(f[x]);
}

void merge(int a, int b)
{
    int x = findx(a);
    int y = findx(b);
    if(x != y)
        f[x] = y;
}

int main()
{
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    int h, r;
    while(cin >> h >> r)
    {
        if(h + r == 0)
            break;
        init(h);
        for(int i = 0; i < r; i++)
        {
            int a, b;
            cin >> a >> b;
            merge(a, b);
        }
        int tmp = 0;
        for(int i = 1; i <= h; i++)
            if(f[i] == i)
                tmp++;
        if(tmp == 1)
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }
    return 0;
}
