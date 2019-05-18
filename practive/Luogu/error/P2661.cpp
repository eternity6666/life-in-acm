#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fa(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fc(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 200000 + 5;

int n;
bool g[maxn][maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%d", &n);
    fa(i, 1, n)
        fa(j, 1, n)
            g[i][j] = 0;
    fa(i, 1, n)
    {
        int tmp;
        scanf("%d", &tmp);
        g[tmp][i] = 1;
    }
    int count = 0;
    fa(k, 1, n)
    {
        if(g[k][k])
            break;
        
        count++;
        fa(j, 1, n)
        {
            if(g[k][j])
            {
                fa(i, 1, n)
                {
                    if(g[j][i])
                        g[k][i] = 1;
                }
            }
        }
    }
    printf("%d\n", count); 
    return 1;
}

