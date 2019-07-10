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

int d[105][105];
int dp[105];

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fadd(i, 1, n)
            fadd(j, 1, i)
            {
                cin >> d[i][j];
                if(i == n)
                    dp[j] = d[i][j];
            }

        fcut(i, n - 1, 1)
            fadd(j, 1, i)
                dp[j] = max(dp[j], dp[j + 1]) + d[i][j];
        cout << dp[1] << endl;
    }
    return 0;
}


