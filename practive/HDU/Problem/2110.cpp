#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 10000;
const int maxn = 1e6 + 5;

int a[11];

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        if(n == 0)
            break;

        memset(a, 0, sizeof(a));
        int all = 0;
        fadd(i, 1, n)
        {
            int pi, mi;
            scanf("%d %d", &pi, &mi);
            a[pi] += mi;
            all += pi * mi;
        }

        if(all % 3 != 0)
            cout << "sorry" << endl;
        else
        {
            all /= 3;
            int b[11][100 * 10 * 10 + 1];
            memset(b, 0, sizeof(b)); 
            fadd(i, 1, 9)
                b[i][0] = 1;
            fadd(i, 1, 9)
                fadd(j, 0, all)
                    for(int k = 0; k <= a[i] && j - k * i >= 0; k++)
                        b[i][j] += b[i - 1][j - k * i];
            int ans = 0;
            fadd(i, 1, all)
                ans += b[9][i];
            cout << ans << endl;
        }
    }
    return 0;
}


