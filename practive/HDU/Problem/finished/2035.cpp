#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

long long quickPow(long long n, long long m);
int main()
{
    freopen("in.txt", "r", stdin);
    long long n, m;
    while(~scanf("%lld %lld", &n, &m))
    {
        if(n == 0 && m == 0)
            break;
        long long ans = quickPow(n, m);
        cout << ans << endl;
    }
    return 0;
}

long long quickPow(long long n, long long m)
{
    long long ans = 1;
    while(m != 0)
    {
        if(m & 1)
            ans = ans * n % 1000;
        n = n * n % 10000;
        m /= 2;
    }
    return ans = ans % 1000;
}
