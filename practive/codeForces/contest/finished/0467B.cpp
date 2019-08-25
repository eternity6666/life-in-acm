#include <iostream>
using namespace std;
const int maxn = 2010;

int x[maxn];

bool can(int f, int x, int k)
{
    int tmp = 0;
    while(f||x)
    {
        if((f&1)!=(x&1))
            tmp++;
        f>>=1, x>>=1;
    }
    return tmp <= k;
}

int main()
{
    int n, m, k; cin >> n >> m >> k;
    for(int i = 0; i < m; i++)
        cin >> x[i];
    int f; cin >> f;
    int ans = 0;
    for(int i = 0; i < m; i++)
        if(can(f, x[i], k))
            ans++;
    cout << ans << endl;
    return 0;
}
