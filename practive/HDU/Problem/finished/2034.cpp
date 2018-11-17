#include <bits/stdc++.h>
using namespace std;
#define f(b, n) for(int i = b; i <= n; i++)
#define f2(a, n) for(int j = a; j <= n; j++)
const int maxn = 100 + 5;

bool cmp(const int &a, const int &b)
{
    return a < b;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n, m;
    while(~scanf("%d %d", &n, &m))
    {
        if(n == 0 && m == 0)
            break;
        int a[maxn], b[maxn];
        bool ab[maxn];
        //for(int i = 1; i <= n; i++)
        f(1, n)
        {
            scanf("%d", a + i);
            ab[i] = 1;
        }
        int k = n;
        sort(a + 1, a + n + 1, cmp);
        //for(int i = 1; i <= m; i++)
        f(1, m)
        {
            scanf("%d", b + i);
            //for(int j = 1; j <= n; j++)
            f2(1, n)
            {
                if(a[j] == b[i])
                {
                    ab[j] = 0;
                    k--;
                    break;
                }
                if(b[i] < a[j])
                    break;
            }
        }
        if(k == 0)
            cout << "NULL" << endl;
        else
        {
            //for(int i = 1; i <= n; i++)
            f(1, n)
            {
                if(ab[i])
                    cout << a[i] << " ";
            }
            cout << endl;
        }
    }
    return 0;
}
