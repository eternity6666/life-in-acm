#include <iostream>
using namespace std;
const int maxn = 100000 + 5;
int n, q, p, b, c;
long long a[maxn];
long long get_ans(int l, int r, int d);
int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &n, &q))
    {
        for(int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
        }
        while(q--)
        {
            scanf("%d %d %d", &p, &b, &c);
            if(p == 1)
            {
                long long ans = 0;
                ans = get_ans(b, c, c + 1);
                cout << ans << endl;
            }
            else if(p == 2)
            {
                a[b] = c;
            }
        }
    }
    return 0;
}

long long get_ans(int l, int r, int d)
{
    if(r == l)
        return a[r] * (d - r);
    return get_ans(l, (l + r)/ 2, d) + get_ans( (l + r)/ 2 + 1, r, d);
}
