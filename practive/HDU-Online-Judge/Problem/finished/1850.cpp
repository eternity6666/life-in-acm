#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 5;

int nim_sum(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    int m;
    while(~scanf("%d", &m) && m)
    {
        long long ans = 0;
        int n[maxn];
        int nim = 0;
        for(int i = 0; i < m; i++)
        {
            scanf("%d", n + i);
            nim = nim_sum(nim, n[i]);
        }
        
        for(int i = 0; i < m; i++)
        {
            if(nim_sum(nim, n[i]) < n[i])
                ans++;
        }
        cout << ans << endl;
    }
    return 0;
}

int nim_sum(int a, int b)
{
    return a ^ b;
}
