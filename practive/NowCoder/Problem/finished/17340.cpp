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

int a[205][205];
int main()
{
    freopen("in.txt", "r", stdin);

    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        if(n & 1)
            cout << "impossible" << endl;
        else
        {
            cout << "possible" << endl;
            fadd(i, 1, n)
                fadd(j, 1, n)
                {
                    if(j <= i)
                        a[i][j] = 1;
                    else
                        a[i][j] = -1;
                    if(j == i && i & 1)
                        a[i][j] = 0;
                    cout << a[i][j] << (j == n ? '\n' : ' ');
                }
        }
    }
    return 0;
}


