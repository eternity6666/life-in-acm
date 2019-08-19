#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e6 + 5;

int main()
{
    // freopen("in.txt", "r", stdin);
    int q;
    scanf("%d", &q);
    while(q--)
    {
        ll n;
        scanf("%lld", &n);
        int ans = 0;
        while(n != 1)
        {
            ans++;
            if(n % 2 == 0)
                n = n / 2;
            else if(n % 3 == 0)
                n = 2 * n / 3;
            else if(n % 5 == 0)
                n = 4 * n / 5;
            else
                break;
        }
        if(n == 1)
            cout << ans << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}


