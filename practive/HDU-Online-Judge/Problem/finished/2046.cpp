#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    long long dp[maxn] = {0, 1, 2, 3};
    fei(4, 50)
        dp[i] = dp[i - 1] + dp[i - 2];
    int n;
    while(~scanf("%d", &n))
    {
        cout << dp[n] << endl;
    }
    return 0;
}
