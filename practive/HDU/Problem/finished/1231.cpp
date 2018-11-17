#include <bits/stdc++.h>
using namespace std;

const int maxn = 10000 + 5;
struct node{
    int ans;
    int b, e;
}dp[maxn];

int a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int k;
    while(~scanf("%d", &k) && k)
    {
        bool flag = 1;
        int max = -1;
        int ip = 1;
        for(int i = 1; i <= k; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] >= 0)
                flag = 0;
            if(i == 1)
            {
                max = a[i];
                dp[i].ans = dp[i].b = dp[i].e = a[i];
            }
            else
            {
                if(a[i] > a[i] + dp[i - 1].ans)
                {
                    dp[i].ans = dp[i].b = dp[i].e = a[i];
                }
                else
                {
                    dp[i].ans = a[i] + dp[i - 1].ans;
                    dp[i].b = dp[i - 1].b;
                    dp[i].e = a[i];
                }
                if(max < dp[i].ans)
                {
                    max = dp[i].ans;
                    ip = i;
                }
            }
        }
        if(flag)
            printf("0 %d %d\n", a[1], a[k]);
        else
            printf("%d %d %d\n", dp[ip].ans, dp[ip].b, dp[ip].e);
    }
    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;

const int maxn = 10000 + 5;
struct node{
    int ans;
    int b, e;
}dp[maxn];

int a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    int k;
    while(~scanf("%d", &k) && k)
    {
        bool flag = 1;
        for(int i = 1; i <= k; i++)
        {
            scanf("%d", &a[i]);
            if(a[i] >= 0)
                flag = 0;
        }
        dp[1].ans = dp[1].b = dp[1].e = a[1];
        int max = dp[1].ans;
        int ip = 1;
        for(int i = 2; i <= k; i++)
        {
            if(a[i] > a[i] + dp[i - 1].ans)
            {
                dp[i].ans = dp[i].b = dp[i].e = a[i];
            }
            else
            {
                dp[i].ans = a[i] + dp[i - 1].ans;
                dp[i].b = dp[i - 1].b;
                dp[i].e = a[i];
            }
            if(max < dp[i].ans)
            {
                max = dp[i].ans;
                ip = i;
            }
        }
        if(flag)
            printf("0 %d %d\n", a[1], a[k]);
        else
            printf("%d %d %d\n", dp[ip].ans, dp[ip].b, dp[ip].e);
    }
    return 0;
}
*/
