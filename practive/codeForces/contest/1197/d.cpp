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

ll a[maxn];
ll sum[maxn];
ll dp[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m, k;
    scanf("%d %d %d",&n,&m,&k);
    for(int i=1;i<=n;i++)
    {
        scanf("%lld",&a[i]);
        sum[i]=sum[i-1]+a[i];
    }
    ll ans=0;
    for(int i=0;i<=n;i++)
    {
        if(i>=m)
            dp[i]=max((ll)0,dp[i-m]+sum[i]-sum[i-m]-k);
        ans=max(ans,dp[i]);
        for(int j=1;j<m;j++)
        {
            if(i+j<=n)
                ans=max(ans,dp[i]+sum[i+j]-sum[i]-k);
        }
        fadd(k, 1, n)
            cout << dp[k] << " ";
        cout << endl;
    }
    printf("%lld\n",ans);
    return 0;
}


