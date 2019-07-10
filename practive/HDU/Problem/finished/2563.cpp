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

int du[25], dr[25], dl[25];

int main()
{
    freopen("in.txt", "r", stdin);
    int c;
    scanf("%d", &c);
    du[1] = dr[1] = dl[1] = 1;
    // cout << "dr du dl" << endl;
    fadd(i, 2, 20)
    {
        du[i] = dr[i - 1] + du[i - 1] + dl[i - 1];
        dr[i] = du[i - 1] + dr[i - 1];
        dl[i] = du[i - 1] + dl[i - 1];
        // printf("%10d %10d %10d %10d", du[i], dr[i], dl[i], du[i] + dr[i] + dl[i]);
        // cout << endl;
    }
    while(c--)
    {
        int n;
        scanf("%d", &n);
        cout << du[n] + dr[n] + dl[n] << endl;
    }
    return 0;
}


