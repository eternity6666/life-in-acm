#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

long long n, m, d, x;

long long got(long long a)
{
    return a * n + a * (a - 1) * d / 2;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> m >> d >> x;

    long long l,z,r;
    l = 1;
    r = x;
    while(l <= r)
    {
        z = (l + r) / 2;
        // cout << z << endl;
        long long zt = got(z);
        // cout << zt << endl;
        if(l == r)
            break;
        if(zt > m)
            r = z;
        else if(zt < m)
            l = z + 1;
        else
            break;
    }
    cout << z << endl;
    return 0;
}

