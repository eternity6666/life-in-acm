#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mod = 1e9 + 7;
const int maxn = 75;
typedef long long ll;

int k;
ll n;
ll k1[maxn], k2[maxn];

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    int t;
    cin >> t;
    while (t--)
    {
        cin >> k >> n;
        k1[0] = k2[0] = 0;
        for (int i = 1; i <= k; ++i)
        {
            int tmp;
            cin >> tmp;
            k1[i] = (k1[i - 1] + tmp) % mod;
        }
        for (int i = 1; i <= k; ++i)
        {
            int tmp;
            cin >> tmp;
            k2[i] = (k2[i - 1] + tmp) % mod;
        }
        ll ans = 0;
        if(n >= k)
        {
            ll all = n / k;
            ll syy = n % k;
            ans = (ans + k2[syy] + k1[k] + (all-1) % mod * k2[k])%mod;
        }
        else
            ans = k1[n];
        cout << ans % mod << endl;
    }
    return 0;
}
