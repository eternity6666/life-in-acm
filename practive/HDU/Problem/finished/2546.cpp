#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 1000 + 5;
int n, m;
int food[maxn];
int dp[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n) && n)
    {
        memset(dp, 0, maxn);
        fei(1, n)
            scanf("%d", food + i);
        sort(food + 1, food + n + 1);
        scanf("%d", &m);
        if(m < 5)
        {
            cout << m << endl;
            continue;
        }
        m -= 5;
        fni(1, n)
        {
            for(int j = m; j >= food[i]; j--)
                dp[j] = max(dp[j], dp[j - food[i]] + food[i]);
        }
        cout << m - dp[m] - food[n] + 5 << endl;
    }
    return 0;
}

