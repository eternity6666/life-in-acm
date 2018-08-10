#include <iostream>
#include <cstdio>
using namespace std;
const int mod = 1000000007;
int main()
{
    int m, n;
    scanf("%d %d", &n, &m);
    long long ans = m;
    for(int i = 1; i < n; i++)
    {
        ans = ans * (m - 1) % mod;
    }
    printf("%lld\n", ans % mod);
    return 0;
}
