#include <iostream>
using namespace std;
const int maxn = 55;
int main()
{
    long long a[maxn];
    a[1] = 3;
    a[2] = a[3] = 6;
    for(int i = 4; i <= 50; i++)
    {
        a[i] = a[i - 1] + a[i - 2] * 2;
    }
    int n;
    while(~scanf("%d", &n))
    {
        cout << a[n] << endl;
    }
    return 0;
}
/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 55;

int rpg[] = {1, 2, 3};
int a[maxn], ans;

void dfs(int now, int flag);

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    memset(a, 0, maxn);
    while(~scanf("%d", &n))
    {
        ans = 0;
        for(int i = 0; i < 3; i++)
        {
            a[1] = rpg[i];
            dfs(1, n);
            a[1] = 0;
        }
        cout << ans << endl;
    }
    return 0;
}

void dfs(int now, int flag)
{
    if(flag == 1)
    {
        ans++;
        return ;
    }
    if(now == flag)
    {
        if(a[1] != a[flag] && a[flag] != a[flag - 1])
            ans++;
        return ;
    }
    if(a[now] == a[now - 1])
        return;
    for(int i = 0; i < 3; i++)
    {
        a[now + 1] = rpg[i];
        dfs(now + 1, flag);
        a[now + 1] = 0;
    }
}
*/
