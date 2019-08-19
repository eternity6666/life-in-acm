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
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int ans[3];
        fadd(i, 0, 2)
            ans[i] = 0;
        while(n--)
        {
            int ai;
            scanf("%d", &ai);
            ans[ai % 3]++;
        }
        int tmp = min(ans[1], ans[2]);
        ans[0] += tmp;
        ans[1] -= tmp;
        ans[2] -= tmp;
        ans[0] += ans[1] / 3 + ans[2] / 3;
        cout << ans[0] << endl;
    }
    return 0;
}


