#include <bits/stdc++.h>
using namespace std;
const int maxn = 10000000 + 5;
bool prime[maxn];
int sum[maxn];

int main()
{
    int n;
    scanf("%d", &n);

    memset(prime, 1, sizeof prime);
    prime[1] = 0;
    for (int i = 2; i <= n; i++)
        if (prime[i])
            for (int j = 2; j * i <= n; j++)
                prime[j * i] = 0;

    long long ans = 0;

    for (int i = 2; i <= n; i++)
        if (prime[i])
            ans++, sum[i] = ans;

    ans = ans * (ans - 1);

    for (int i = n; i >= 3; i--)
    {
        if (prime[i])
        {
            int t = n / i;
            t--;
            sum[i]--;
            ans += (2 * t * sum[i]);
        }
    }
    printf("%lld\n", ans);
    return 0;
}