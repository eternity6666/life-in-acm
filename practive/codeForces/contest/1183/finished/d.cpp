#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 2e5 + 5;

int a[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;
        fadd(i, 1, n)
            a[i] = 0;
        fadd(i, 1, n)
        {
            int m;
            cin >> m;
            a[m]++;
        }
        sort(a + 1, a + n + 1);
        int now = inf;
        int ans = 0;
        for(int i = n; i >= 1 && a[i] && now; i--) {
            if(now <= a[i])
                now--;
            else
                now = a[i];
            ans += now;
        }
        cout << ans << endl;
    }
    return 0;
}


