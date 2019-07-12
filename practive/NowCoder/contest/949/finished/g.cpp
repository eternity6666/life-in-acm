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
    double n;
    scanf("%lf", &n);
    double r = n / acos(-1);
    double ans = r * r / 2 * acos(-1);
    printf("%.3lf\n", ans);
    return 0;
}


