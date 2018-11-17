#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
int up = 6, down = 4, stop = 5;
int a[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n) && n)
    {
        int ans = n * stop;
        int now = 0;
        fei(1, n)
        {
            cin >> a[i];
            if(now < a[i])
            {
                ans += (a[i] - now) * up;
                now = a[i];
            }
            else if(now > a[i])
            {
                ans += (now - a[i]) * down;
                now = a[i];
            }
        }
        cout << ans << endl;
    }
    return 0;
}

