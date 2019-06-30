#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 10000;
const int maxn = 1e6 + 5;

int a[101], b[101];
int s[10010];
int t[10010];

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        if(n == 0)
            break;

        int all = 0;
        fadd(i, 1, n)
        {
            scanf("%d %d", &a[i], &b[i]);
            all += (a[i] * b[i]);
        }
        
        if(all % 3 != 0)
        {
            cout << "sorry" << endl;
            continue;
        }

        memset(s, 0, sizeof(s));
        memset(t, 0, sizeof(t));
        all /= 3;
        for(int i = 0; i <= b[0] && i * a[0] <= all; i++)
            s[i * a[0]] = 1;

        fadd(i, 1, n)
        {
            fadd(j, 0, all)
                for(int k = 0; k <= b[i] && k * a[i] + j <= all; k++)
                {
                    t[k * a[i] + j] += s[j];
                    t[k * a[i] + j] %= 10000;
                }
            fadd(j, 0, all)
            {
                s[j] = t[j];
                t[j] = 0;
            }
        }

        if(s[all] != 0)
            cout << s[all] % mod << endl;
        else
            cout << "sorry" << endl;
    }
    return 0;
}


