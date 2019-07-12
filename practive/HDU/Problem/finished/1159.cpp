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

int dp[1000][1000];

int main()
{
    freopen("in.txt", "r", stdin);
    string a, b;
    while(cin >> a >> b)
    {
        memset(dp, 0, sizeof(dp));
        int alen = a.size();
        int blen = b.size();
        fadd(i, 0, alen - 1)
            fadd(j, 0, blen - 1)
                if(a[i] == b[j])
                    dp[i + 1][j + 1] = dp[i][j] + 1;
                else
                    dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
        cout << dp[alen][blen] << endl;
    }
    return 0;
}


