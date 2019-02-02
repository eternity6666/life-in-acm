#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

long long n, m, d,x;
long long got(long long a)
{
    return (2 * n + (n - 1) * d) * n / 2;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> m >> d >> x;
    
    long long ans = 0;
    long long l, r, z;
    l = 1;
    r = x;
    while(l < r)
    {
        z = (r + l) / 2;
        long long lt, rt, zt;
        lt = got(l);
        if(lt >= m)
        {
            z = l;
            break;
        }
        // rt = got(r);
        zt = got(z);
        cout << lt << " " << zt << endl;
        if(zt > m)
            r = z;
        else if(zt == m)
            break;
        else
            l = z;
    }
    ans = z;

    cout << ans << endl;
    /*
    long long ans = 1;
    long long tmp = n;
    while(tmp < m && ans <= x)
    {
        ans++;
        tmp = tmp + n + d;
    }
    cout << ans << endl;
    */
    return 0;
}

