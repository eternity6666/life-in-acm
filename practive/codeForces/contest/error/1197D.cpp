#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 3e5 + 5;

ll a[maxn];
ll sum[maxn];
ll tmp[maxn];

/*
ll deal(ll r, ll l, ll m)
{
    int ans = r - l + 1;
    if(ans % m == 0)
        return ans / m;
    else
        return ans / m + 1;
}
*/

int main()
{
    freopen("in.txt", "r", stdin);
    ll n, m, k;
    cin >> n >> m >> k;
    sum[0] = 0;
    fadd(i, 1, n)
    {
        cin >> a[i];
        sum[i] = sum[i-1] + a[i];
        tmp[i - 1] = k * (i / m + (i % m == 0 ? 0 : 1));
        // cout << tmp[i - 1] << " ";
    }
    cout << endl;
    ll ans = 0;
    fadd(i, 1, n)
        fadd(j, i, n)
            ans = max(sum[j] - sum[i] - tmp[j - i], ans);
    cout << ans << endl;
    return 0;
}


