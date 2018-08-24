#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 1000 + 5;
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n)
    {
        int t[maxn], k[maxn];
        for(int i = 0; i < n; i++) scanf("%d", &t[i]);
        for(int i = 0; i < n; i++) scanf("%d", &k[i]);
        sort(t, t + n);
        sort(k, k + n);
        int ans = 0;
        int i = 0, j = 0, x = n - 1, y = n - 1;
        while(n--)
        {
            if(t[i] > k[j])
                ans++, i++, j++;
            else if(t[x] > k[y])
                ans++, x--, y--;
            else
            {
                if(t[i] < k[y]) ans--;
                i++, y--;
            }
        }
        printf("%d\n", ans * 200);
    }
    return 0;
}
