#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 4005;

bool a[maxn];
int b[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    while(~scanf("%d %d", &n, &m))
    {
        memset(a, 0, sizeof(a));
        fadd(i, 1, n)
        {
            int tmp;
            cin >> tmp;
            a[tmp] = 1;
        }
        fadd(i, 1, m)
            cin >> b[i];

        int ans = 0;
        while(true)
        {
            bool flag = true;
            fadd(i, 1, m)
                if(a[b[i] + ans])
                {
                    flag = false;
                    break;
                }
            if(flag)
                break;
            ans++;
        }
        cout << ans << endl;
    }
    return 0;
}


