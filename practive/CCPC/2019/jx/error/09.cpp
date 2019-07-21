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
        double ans = 0;
        fadd(i, 1, n)
        {
            double tmp;
            cin >> tmp;
            stringstream ss;
            ss << tmp;
            string s;
            ss >> s;
            int len = s.length() - 1;
            len = s[len] - '0';
            if(len <= 4)
                fadd(j, 1, len)
                    ans -= 0.001;
            else
                fadd(j, len, 9)
                    ans += 0.001;

        }
        printf("%.3lf\n", ans);
    }
    return 0;
}


