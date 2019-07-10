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
        int e, f, n;
        int p[505], w[505];
        
        scanf("%d %d", &e, &f);
        e = f - e;
        scanf("%d", &n);

        fadd(i, 1, n)
            scanf("%d %d", &p[i], &w[i]);

        int ff[10002];
        fadd(i, 0, e)
            ff[i] = 99999999;
        ff[0] = 0;
        fadd(i, 1, n)
            fadd(j, w[i], e)
                ff[j] = min(ff[j - w[i]] + p[i], ff[j]);
        if(ff[e] != 99999999)
            cout << "The minimum amount of money in the piggy-bank is " << ff[e] << ".\n";
        else
            cout << "This is impossible.\n";
    }
    return 0;
}


