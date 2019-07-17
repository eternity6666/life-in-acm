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

ll q;
ll k, n, a, b;
bool ok(ll x)
{
    if(a * x >= k)
        return false;
    // cout << q << ": " << x << endl;

    return a * x + b * (n - x) < k;
}

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%lld", &q);
    while(q--)
    {
        scanf("%lld %lld %lld %lld", &k, &n, &a, &b);
        ll ans = -1;
        ll s = 0;
        ll e = n;
        ll m = (e + s) / 2;
        while(s <= e)
        {
            if(ok(m))
            {
                ans = m;
                s = m + 1;
            }
            else
                e = m - 1;
            m = (e + s) / 2;
        }
        cout << ans << endl;
    }
    return 0;
}

