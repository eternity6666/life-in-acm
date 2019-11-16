#include <bits/stdc++.h>
using namespace std;
const int mod = 666666;
typedef long long ll;

int main()
{
    map<int, ll> db;
    db[-1] = 4;
    db[0] = 233;
    for(int i = 1; i <= 2520; i++)
        db[i] = (4 * db[i-1] + 3 * db[i-2])%mod;
        // cout << db[i] << endl;
    ll m, n;
    while(~scanf("%lld %lld", &n, &m))
    {
        ll ans = m - db[(n-3)%2520+1];
        cout << (ans<0?0:ans) << endl;
    }
    return 0;
}