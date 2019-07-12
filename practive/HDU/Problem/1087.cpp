#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1000 + 5;

ll v[maxn];
ll dp[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n)
    {
        fadd(i, 1, n)
            scanf("%lld", &v[i]);

    }
    return 0;
}


