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

ll a[maxn];
string s;

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> s;
    int len = s.length() - 1;
    a[0] = 0;
    fadd(i, 1, len)
        a[i] = a[i - 1] + (s[i - 1] == 'v' && s[i] == 'v' ? 1 : 0);
    ll ans = 0;
    fadd(i, 0, len)
        if(s[i] == 'o')
            ans += a[i - 1] * (a[len] - a[i]);
    cout << ans << endl;
    return 0;
}


