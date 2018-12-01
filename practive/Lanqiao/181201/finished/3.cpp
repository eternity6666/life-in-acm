#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n, ans;
int a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n))
    {
        fei(1, n)
            cin >> a[i];
        ans = 0;
        int tmp;
        while(1)
        {
            tmp = a[n] / 2;
            for(int i = n - 1; i >= 1; i--)
            {
                int s = a[i] / 2;
                a[i] = a[i] / 2 + tmp;
                if(a[i] % 2 == 1)
                {
                    ans++;
                    a[i]++;
                }
                tmp = s;
            }
            a[n] = a[n] / 2 + tmp;
            if(a[n] % 2 == 1)
            {
                ans++;
                a[n]++;
            }
            tmp = a[n];

            bool flag = 1;

            // cout << ans << endl;
            for(int i = n - 1; i >= 1; i--)
            {
                if(tmp != a[i])
                    flag = 0;
                if(!flag)
                    break;
                // cout << a[i] << endl;
            }
            if(flag)
                break;
        }
        cout << ans << endl;
    }
    return 0;
}

