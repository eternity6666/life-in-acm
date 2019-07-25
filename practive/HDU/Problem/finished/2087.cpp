#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, tizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e3 + 5;

int pre[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    string t;
    while(cin >> t)
    {
        if(t == "#")
            break;
        string p;
        cin >> p;
        pre[0] = -1;
        int plen = p.length();
        int k = -1;
        int j = 0;
        while(j < plen - 1)
            if(k == -1 || p[j] == p[k])
            {
                ++k;
                ++j;
                pre[j] = k;
            }
            else
                k = pre[k];

        int tlen = t.length();
        int i = 0;
        j = 0;
        int ans = 0;
        while(i < tlen && j < plen)
        {
            if(j == -1 || t[i] == p[j])
            {
                i++;
                j++;
                if(j == plen)
                {
                    ans++;
                    j = 0;
                }
            }
            else
                j = pre[j];
        }
        cout << ans << endl;
    }
    return 0;
}


