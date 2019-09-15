/*
#include <bits/stdc++.h>
using namespace std;

int solve()
{
    int N, b;
    cin >> N >> b;
    int ans = 0;
    for (int i = 1; i <= N; ++i)
    {
        int n = i;
        while (n)
        {
            ans = ans + n % b;
            n /= b;
        }
    }
    return ans;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
        printf("Case #%d: %d\n", i, solve());
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;
const int maxn = 1e6 + 10;

int ans[maxn][15];

void deal(int maxN)
{
    for (int b = 2; b <= 10; ++b)
        for (int i = 0; i <= maxN; ++i)
        {
            if (i == 0)
                ans[0][b] = 0;
            else if (i == 1)
                ans[1][b] = 1;
            else
            {
                int sbn = ans[i - 1][b] - ans[i - 2][b] + 1;
                if (i % b == 0)
                {
                    sbn = 0;
                    int n = i;
                    while (n)
                    {
                        sbn += n % b;
                        n /= b;
                    }
                }
                ans[i][b] = sbn + ans[i - 1][b];
            }
        }
}

int solve()
{
    int N, b;
    scanf("%d%d", &N, &b);
    return ans[N][b];
}

int main()
{
    int t;
    scanf("%d", &t);
    deal(1000000);
    for (int i = 1; i <= t; ++i)
        printf("Case #%d: %d\n", i, solve());
    return 0;
}