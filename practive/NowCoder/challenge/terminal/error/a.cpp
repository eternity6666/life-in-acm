#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e4 + 4;

int c[maxn];
bool v[maxn];
int g[maxn][maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        fadd(i, 1, n)
            cin >> c[i];
        fadd(i, 1, n)
            fadd(j, 1, n)
                if(i != j)
                    g[i][j] = c[i] + c[j];
                else
                    g[i][j] = 0;

        fadd(i, 1, n)
        {
            c[i] = inf;
            v[i] = 0;
        }
        c[1] = 0;
        int ans = 0;

        while(true)
        {
            int mark = -1;
            fadd(i, 1, n)
                if(!v[i] && (mark == -1 || c[i] < c[mark]))
                    mark = i;

            if(mark == -1)
                break;

            v[mark] = true;
            ans += c[mark];

            fadd(i, 1, n)
                c[i] = min(c[i], g[mark][i]);
        }
        cout << ans << endl;
    }
    return 0;
}


