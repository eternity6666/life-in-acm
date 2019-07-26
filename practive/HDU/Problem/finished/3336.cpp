#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 10007;
const int maxn = 2e5 + 5;

string s;
int n;
int pre[maxn];
int dp[maxn];

void getNext()
{
    int i = 0, j = -1;
    pre[0] = -1;
    while(i < n)
    {
        if(j == -1 || s[i] == s[j])
        {
            ++i;
            ++j;
            pre[i] = j;
        }
        else
            j = pre[j];
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s;
        getNext();
        memset(dp, 0, n);
        int sum = 0;
        fadd(i, 1, n)
        {
            dp[i] = dp[pre[i]] + 1;
            sum = (sum + dp[i]) % mod;
        }
        cout << sum << endl;
    }
    return 0;
}


