#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

unsigned long long ans, n, k;
// queue<int> a, b, c;
unsigned long long powQuick(unsigned long long a, unsigned long long b);

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        scanf("%lld %lld", &n, &k);
        // ans = 0;
        /*
        a.clear();
        b.clear();
        c.clear();
        for(int i = 64; i >= 1; i++)
            a.push(i);
        */
        ans = powQuick(2, n - k);
        cout << ans << endl;
    }
    return 0;
}

unsigned long long powQuick(unsigned long long a, unsigned long long b)
{
    if(b == 0)
        return 1;
    if(b == 1)
        return a;
    return powQuick(a, b / 2) * powQuick(a, (b + 1) / 2);
    /*
    unsigned long long ans = 1;
    if(b == 0)
        return 1;
    while(b != 1)
    {
        ans = ans * a;
        a = a * a;
        b = b / 2;
    }
    return ans;
    */
    /*
    // long long ans = 1;
    if(b == 0)
        return 1;
    else if(b == 1)
        return a;
    else
        return a * powQuick(a * a, b / 2);
    */
}

