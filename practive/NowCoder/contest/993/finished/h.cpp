#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 3500;

ll c[maxn], w[maxn];
ll dp[13000];

int main()
{
    freopen("in.txt", "r", stdin);
    memset(dp, 0, sizeof(dp));
    ll n, m;
    cin >> n >> m;
    fadd(i, 1, n)
        cin >> c[i] >> w[i];

    dp[0] = 0;
    fadd(i, 1, n)
        fcut(j, m, c[i])
        {
            dp[j] = max(dp[j], dp[j - c[i]] + w[i]);
        }
    cout << dp[m] << endl;
    return 0;
}


