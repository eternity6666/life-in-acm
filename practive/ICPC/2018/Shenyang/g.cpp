#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000000 + 5;
const int mod = 1000000000 + 7;

int a[maxn], n, m;
bool bz[maxn];

int main()
{
    a[0] = 0;
    a[1] = 2;
    int an = 2;
    while(~scanf("%d %d", &n, &m))
    {
        memset(bz, 1, n + 1);
        int ans = 0;
        if(n >= an)
        {
            for(int i = an; i <= n; i++)
                a[i] = ((3 * a[i - 1] - a[i - 2]) / 2 + i + 1) % mod;
            an = n;
        }
        
        for(int i = 1; i <= n; i++)
        {
            if(m > i && m % i == 0 && i > 1)
            {
                bz[i] = 0;
            }
            if(bz[i] == 0)
            {
                for(int j = 1; j * i <= n; j++)
                    bz[i * j] = 0;
            }
            if(bz[i] == 1)
            {
                ans  = (ans + a[i]) % mod;
            }
        }

        printf("%d\n", ans % mod);
    }
    return 0;
}
