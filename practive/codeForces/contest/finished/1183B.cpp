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
        int n, k;
        cin >> n >> k;
        int mi = 1e8 + 5;
        int ma = 0;
        fadd(i, 1, n)
        {
            int a;
            cin >> a;
            if(mi > a)
                mi = a;
            if(ma < a)
                ma = a;
        }
        if(abs(mi + k - ma) <= k)
            cout << mi + k << endl;
        // else if(abs((mi + ma) / 2 - mi) <= k && abs((mi + ma) / 2 - ma) <= k)
        //  cout << (mi + ma) / 2 << endl;
        else
            cout << -1 << endl;
    }
    return 0;
}


