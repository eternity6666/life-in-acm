#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n;
int a[maxn];
int getAns(int s);

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n))
    {
        fei(0, n - 1)
            cin >> a[i];
        
        int ans = 0;

        fei(0, n - 1)
        {
            int tmp = getAns(i);
            if(ans < tmp)
                ans = tmp;
            // cout << tmp << endl;
        }

        cout << ans << endl;
    }
    return 0;
}

int getAns(int s)
{
    int ans = 0;
    
    bool v[maxn];

    fei(0, n)
        v[i] = 0;

    int i = 1;
    int j = 0;
    while(1)
    {
        if(i > n || j > n * n)
            break;
        if(v[(s + j) % n])
        {
            j++;
        }
        else
        {
            if(a[(s + j) % n] == i)
            {
                ans += i;
                v[(s + j) % n] = 1;
                s = (s + j) % n + 1;
                j = 0;
                i = 1;
            }
            else
            {
                i++;
                j++;
            }
        }
    }

    return ans;
}
