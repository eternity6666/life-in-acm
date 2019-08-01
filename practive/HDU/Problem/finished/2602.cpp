#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1005;

int c[maxn];
int w[maxn];
int f[maxn][maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    cin >> t;
    while(t--)
    {
        int n, v;
        cin >> n >> v;
        fadd(i, 1, n)
            cin >> w[i];
        fadd(i, 1, n)
            cin >> c[i];

        memset(f, 0, sizeof(f));
        fadd(i, 1, n)
        {
            fadd(j, 0, v)
                if(j >= c[i])
                    f[i][j] = max(f[i - 1][j], f[i - 1][j - c[i]] + w[i]);
                else
                    f[i][j] = f[i - 1][j];
            
            /*
            fadd(k, 0, n)
                fadd(j, 0, v)
                    cout << f[k][j] << (j == v ? '\n' : ' ');
            cout << "///////////////////////" << endl;
            */
            
        }
        cout << f[n][v] << endl;
    }
    return 0;
}


