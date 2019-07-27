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

int deal(int n, int m)
{
    int ans = 0;
    fadd(a, 1, n - 1)
        fadd(b, a + 1, n - 1)
        {
            if((a * a + b * b + m) % (a * b) == 0)
                ans++;
        }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int N;
    cin >> N;
    int n, m;
    while(N--)
    {
        int i = 0;
        while(~scanf("%d %d", &n, &m) && (n + m > 0))
        {
            cout << "Case " << ++i << ": " << deal(n, m) << endl;
        }
        if(N != 0)
            cout << endl;
    }
    return 0;
}


