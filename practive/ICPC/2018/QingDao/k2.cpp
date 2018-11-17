#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000 + 5;

long long a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        for(int i = 0; i < n; i++)
            scanf("%lld", &a[i]);
        long long tmp = a[0];
        int ans = 1;
        int maxl = -1;
        /*
        for(int i = 1; i < n; i++)
        {
            if((tmp ^ a[i]) < min(tmp, a[i]))
            {
                ans++;
            }
            else
            {
                tmp = a[i];
                maxl = max(ans, maxl);
                ans = 1;
            }
        }
        ans = max(maxl, ans);
        */
        for(int i = 0; i < n; i++)
        {
            for(int j = 0 ; j < n; j++)
            {
                if((a[i] ^ a[j]) < min(a[i], a[j]))
                {
                    cout << a[i] << " " << a[j] << endl;
                    ans += 2;
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}

