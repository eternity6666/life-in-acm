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
    int q;
    cin >> q;
    while(q--)
    {
        int n;
        cin >> n;

        int ix, iy, ax, ay;
        ax = ay = 1e5;
        ix = iy = -ax;
        bool flag = 1;
        fadd(i, 1, n)
        {
            int x, y, f1, f2, f3, f4;
            cin >> x >> y >> f1 >> f2 >> f3 >> f4;
            if(flag)
            {
                if(f1 == 0)
                    if(ax < x)
                        flag = false;
                    else
                        ix = max(ix, x);
                if(f2 == 0)
                    if(iy > y)
                        flag = false;
                    else
                        ay = min(ay, y);
                if(f3 == 0)
                    if(ix > x)
                        flag = false;
                    else
                        ax = min(ax, x);
                if(f4 == 0)
                    if(ay < y)
                        flag = false;
                    else
                        iy = max(iy, y);
            }
        }
        if(flag)
            cout << 1 << " " << ix << " " << iy << endl;
        else
            cout << 0 << endl;
    }
    return 0;
}


