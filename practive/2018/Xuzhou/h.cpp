#include <iostream>
using namespace std;
const int maxn = 100000 + 5;
int n, q, p, b, c;
long long a[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d", &n, &q))
    {
        for(int i = 1; i <= n; i++)
        {
            scanf("%lld", &a[i]);
           // cout << a[i] << endl;
        }
        while(q--)
        {
            scanf("%d %d %d", &p, &b, &c);
            if(p == 1)
            {
                long long ans = 0;
                long long l = c - b + 1;
                for(int i = b; i <= c; i++)
                {
                    ans = ans + a[i] * l;
                    l--;
                }
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
