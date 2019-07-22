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

string s;

int findv(int ss, int e)
{
    int ans = 0;
    fadd(i, ss, e - 1)
        if(s[i] == 'v' && s[i + 1] == 'v')
            ans++;
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> s;
    int len = s.length() - 1;
    int ans = 0;
    fadd(i, 0, len)
    {
        if(s[i] == 'o')
        {
            int a = findv(0, i - 1);
            int b = findv(i + 1, len);
            ans += a * b;
        }
    }
    cout << ans << endl;
    return 0;
}


