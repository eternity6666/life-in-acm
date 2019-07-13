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
    int n;
    while(~scanf("%d", &n))
    {
        int arr[105];
        fadd(i, 1, n)
            scanf("%d", &arr[i]);
        int ans = 0;
        fcut(i, n, 1)
        {
            fcut(j, i, 1)
                if(arr[j] > arr[i])
                {
                    ans = max(ans, j);
                }
        }
        cout << ans << endl;
    }
    return 0;
}


