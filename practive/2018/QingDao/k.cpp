#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000 + 5;

long long a[maxn];
bool cmp(long long &a, long long &b)
{
    return a < b;
}
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
        int ans = 1;
        int maxl = -1;
        sort(a, a + n, cmp);
        long long tmp = a[0];
        for(int i = 1; i < n; i++)
        {
            if((tmp ^ a[i]) < min(tmp, a[i]))
            {
                ans++;
//                cout << a[i] << " ";
            }
            else
            {
                tmp = a[i];
                maxl = max(ans, maxl);
                ans = 1;
  //              cout << endl;
            }
        }
        ans = max(maxl, ans);
        /*
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
        */
    //    cout << "ans" << ans << endl;
          cout << ans << endl;
    }
    return 0;
}
