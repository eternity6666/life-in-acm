#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;

int n;
int a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n;
    fei(0, n - 1)
        cin >> a[i];
    sort(a, a + n);
    int min = a[0];
    int mini = 0;
    while(1)
    {
        long long ans = 0;
        bool flag = 0;
        int tmp = mini;
        fei(mini, n - 1)
        {
            if(a[i] - min > 0)
            {
                a[i] -= min;
                if(!flag)
                {
                    tmp = i;
                    flag = 1;
                }
            }
            else
            {
                flag = 0;
                a[i] = 0;
            }
            ans += a[i];
        }
        mini = tmp;
        cout << ans << endl;
        if(ans == 0)
            break;
    }
    return 0;
}

