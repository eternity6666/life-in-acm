#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e6 + 3;
const int maxn = 1e6 + 5;

bool v[maxn];
int prime[maxn];
int cnt = -1;

void getPrime(int n)
{
    memset(v, true, sizeof v);
    for(int i = 2; i <= n; i++)
    {
        if(v[i]) {
            cnt++;
            prime[cnt] = i;
        }
        for(int j = 0; ((j <= cnt) && (i * prime[j] <= n)); j++)
        {
            v[i * prime[j]] = false;
            if(i % prime[j] == 0)
                break;
        }
    }
}

ll poww(ll a,ll b,ll m)
{
    ll ans=1;
    while(b)
    {
        if(b&1)
            ans=ans*a%m;
        a=a*a%m;
        b>>=1;
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    getPrime(mod);
    int n;
    while(~scanf("%d", &n))
    {
        if(n >= mod)
            cout << 0 << endl;
        else
        {
            ll ans = 1;
            for(int i = 0; i <= cnt && prime[i] <= n; i++)
            {
                int k = 0;
                int t = n % mod;
                while(t) {
                    k += t/prime[i];
                    t /= prime[i];
                }
                ans = ans * poww(prime[i], k, mod) % mod;
            }
            cout << ans << endl;
        }
    }
    return 0;
}


