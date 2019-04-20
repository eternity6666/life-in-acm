#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;
const int mod = 1000000007;

int main()
{
    freopen("in.txt", "r", stdin);
    long long a, b, tmpa, tmpb;
    long long n;
    cin >> n;
    a = b = tmpa = tmpb = 1;
    fei(2, n)
    {
        cout << a << ": " << b << endl;
        tmpa = a;
        tmpb = b;
        a = 2 * tmpa % mod+ 2 * tmpb % mod;
        b = tmpa % mod + tmpb % mod;
        // cout << a << ": " << b << endl;
    }
    cout << a << ": " << b << endl;
    cout << a << endl;
    return 0;
}


