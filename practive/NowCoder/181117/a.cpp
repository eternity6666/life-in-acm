#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
const int mod = 1e9 + 7;
int n, a, b;

long long gcd(long long a, long long b)
{
    return b > 0 ? gcd(b, a % b) : a;
}

// ans * a === b (% mod);
long long got_ans(long long a, long long b)
{
    long long i = 0;
    while(1)
    {
        if((mod * i + a) % b == 0)
            return (mod * i + a) / b;
        i++;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    long long p, q;
    p = q = 1;
    while(n--)
    {
        int a, b;
        cin >> a >> b;
        p = a * p, q = b * q;
    }
    p = q - p;
    q = q;

    long long tmp = gcd(p, q);
    p /= tmp, q /= tmp;
    
    long long ans = got_ans(p, q);
    cout << ans << endl;
    return 0;
}

