#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000 + 5;
const int mod = 1000000007;
char c[maxn];

inline long long phi(long long a)
{
    long long ans = a;
    for(long long i = 2; i <= (long long)sqrt(a * 10); ++i) if(a % i == 0)
    {
        ans = ans / i * (i - 1);
        while(a % i == 0) a /= i;
    }   
    if(a > 1) ans = ans / a * (a - 1);
    return ans;
}

inline long long Pow(long long a, long long b, long long m)
{
    long long ans = 1;
    for(long long t = a; b; b >>= 1, t = (t % m) * (t % m) % m)
        if(b & 1) ans = (ans % m) * (t % m) % m;
    return ans;
}

inline void print(long long a)
{
    int top = 0;
    char ch[50];
    if(a < 0)
    {
        putchar('-');
        a = -a;
    }
    do {
        ch[top++] = a%10 + 48;
        a /= 10;
    } while(a);
    while(top--) putchar(ch[top]);
    putchar('\n');
}

int main()
{
    freopen("in.txt", "r", stdin);
    long long t, b, len, phi_num;
    phi_num = phi(mod);
    cin >> t;
    while(t--)
    {
        scanf("%s", c);
        len = strlen(c);
        b = 0LL;
        for(int i = 0; i < len; i++)
        {
            b = b * 10 + c[i] - 48;
            b %= phi_num;
        }
        print(Pow(2, b - 1, mod));
    }
    return 0;
}
