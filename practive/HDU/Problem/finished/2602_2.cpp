#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int num[1005], cost[1005], f[1005];

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n, v;
        scanf("%d %d", &n, &v);
        fadd(i, 1, n)
            scanf("%d", &cost[i]);
        fadd(i, 1, n)
            scanf("%d", &num[i]);

        memset(f, 0, sizeof(f));

        fadd(i, 1, n)
            fcut(j, v, num[i])
                f[j] = max(f[j - num[i]] + cost[i], f[j]);

        cout << f[v] << endl;

    }
    return 0;
}


