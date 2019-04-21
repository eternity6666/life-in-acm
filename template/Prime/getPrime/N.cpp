// 素数筛法 O(N)

#include <bits/stdc++.h>
using namespace std;
const int maxn = 100000 + 5;

bool v[maxn];
int ans[maxn];

void getPrime(int n)
{
    int tot = -1;
    memset(v, true, sizeof v);
    for(int i = 2; i <= n; i++)
    {
        if(v[i]) {
            tot++;
            ans[tot] = i;
        }
        for(int j = 0; ((j <= tot) && (i * ans[j] <= n)); j++)
        {
            v[i * ans[j]] = false;
            if(i % ans[j] == 0)
                break;
        }
    }
    for(int i = 0; i <= tot; i++)
        cout << ans[i] << endl;
}

int main()
{
    getPrime(1000);
    return 0;
}
