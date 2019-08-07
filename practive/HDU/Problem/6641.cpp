#include <iostream>
using namespace std;
typedef long long ll;

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        ll k, m;
        cin >> k >> m;
        
    }
    return 0;
}

/*
ll f(ll m, ll n)
{
    int tmp = 0;
    int i = n + 1;
    while(true)
    {
        if(gcd(i,n) == 1)
        {
            tmp++;
            if(tmp == m)
                return i;
        }
    }
}
*/