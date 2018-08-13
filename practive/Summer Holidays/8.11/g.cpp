#include <bits/stdc++.h>
#define usefre
const int mod = 1000000007;
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    long long n;
    cin >> n;
    long long ans = 0;
    ans = (n * (n * (n * (n - 6) % mod + 23 ) % mod - 42 ) % mod + 24) % mod / 24;
    /*
    ans = (ans + 24 - 42 * n % mod) % mod;
    ans = (ans + 23 * n % mod * n % mod) % mod;
    ans = (ans - 6 * n % mod * n % mod * n % mod) % mod;
    ans = (ans + n % mod * n % mod * n % mod * n % mod) % mod;
    ans = ans / 24;
    */
    cout << ans % mod << endl;
    return 0;
}
