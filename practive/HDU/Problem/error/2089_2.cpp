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

int ans[maxn];

bool is(int x)
{
    stringstream ss;
    ss << x;
    string s;
    ss >> s;
    int len = s.length();
    fadd(i, 0, len - 1)
        if(s[i] == '4')
            return true;
        else if(s[i] == '6' && (i + 1) < len && s[i + 1] == '2')
            return true;

    return false;
}

int main()
{
    freopen("in.txt", "r", stdin);
    ans[0] = 0;
    fadd(i, 1, 1000000)
    {
        if(is(i))
            ans[i] = ans[i - 1];
        else
            ans[i] = ans[i - 1] + 1;
    }
    int n, m;
    while(~scanf("%d %d", &n, &m) && (n + m))
    {
        cout << ans[m] - ans[n - 1] << endl;
    }
    return 0;
}


