#include <iostream>
#include <map>
using namespace std;
typedef long long ll;
const int mod = 998244353;
const int maxn = 1e5 + 10;

int mindiv[maxn], phi[maxn], sum[maxn];
map<ll, ll> ma;

void euler()
{
    for(int i = 1; i < maxn; ++i) mindiv[i] = i;
    for(int i = 2; i * i < maxn; ++i)
    {
        if(mindiv[i] == i)
        {
            for(int j = i * i; j < maxn; j += i)
            {
                mindiv[j] = i;
            }
        }
    }
    phi[1] = 1;
    for(int i = 2; i < maxn; ++i)
    {
        phi[i] = phi[i/mindiv[i]];
        if((i/mindiv[i]) % mindiv[i] == 0)
            phi[i] *= mindiv[i];
        else
            phi[i] *= mindiv[i] - 1;
    }
}

ll mypow(ll a, ll b)
{
    if(b == 0) return 1 % mod;
    ll tmp = mypow(a, b >> 1);
    tmp = tmp * tmp % mod;
    if(b & 1)
        tmp = tmp * a % mod;
    return tmp;
}

void solve()
{
    int n; cin >> n;
    ll ans = 0;
    for(int i = 1; i <= n; ++i)
        for(int j = 1; j <= n; ++j)
        {
            ll tmp = (ll)phi[i] * phi[j];
            if(j >= i)
            {
                if(ma[tmp] == 0)
                    ma[tmp] = mypow(2, tmp) % mod;
                ans = (ans + tmp * ma[tmp] % mod) % mod;
                if(i != j)
                    ans = (ans + tmp * ma[tmp] % mod) % mod;
            }
            // cout << tmp << (j == n ? "\n" : " ");
            // if(i == 1)
            //     printf("%2d: %10lld\n", j, tmp % mod);
            // cout << (j==n?"\n":" ");
        }
    cout << ans << endl;
}

int main()
{
    int t; cin >> t;
    euler();
    while(t--)
    {
        solve();
    }
    return 0;
}

/*
int prime[maxn];
int len = 0;
void getPrime()
{
    bool v[maxn];
    memset(v, 1, sizeof(v));
    for(int i = 2; i < maxn; i++)
        if(v[i])
        {
            prime[len++] = i;
            for(int j = 2; i * j < maxn; j++)
                v[i*j] = 0;
        }
}

double euler(int x)
{
    double ans = 1;
    for(int i = 0; i < len; i++)
        if(prime[i] <= x)
            if(x % prime[i] != 0)
                ans = (ans * (1 - 1.0 / prime[i])) % mod;
    return ans * x % mod;
}

void solve()
{
    int n; cin >>n;
    double ans = 0;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= n; j++)
        {
            double tmp = euler(i) * euler(j) % mod;
            ans = (ans + tmp * mypow(2, tmp) % mod) % mod;
        }
}

int main()
{
    int t; cin >> t;
    getPrime();
    while(t--)
    {
        solve();
    }
    return 0;
}
*/
