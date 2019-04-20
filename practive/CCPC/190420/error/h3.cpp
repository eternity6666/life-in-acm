#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
const int mod = 1000000007;

long long quickPow(long long a, long long b);

int main()
{
    freopen("in.txt", "r", stdin);
    long long n;
    cin >> n;
    if(n == 1)
        cout << 1 << endl;
    else 
    {
        long long ans = 4 * quickPow(3, n - 2) % mod;
        cout << ans << endl;
    }
    return 0;
}

long long quickPow(long long a, long long b)
{
    if(b == 0) return 1;
    if(b % 2 == 1)
        return a * quickPow(a, b - 1) % mod;
    else {
        long long mul = quickPow(a, b / 2);
        return mul * mul;
    }
}

