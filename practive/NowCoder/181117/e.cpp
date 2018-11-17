#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 10;

int n, m, a[maxn];

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n >> m;
    fei(1, n)
        cin >> a[i];

    while(m--)
    {
        int ans = 0, l, r, k;
        cin >> l >> r >> k;

        fei(l, r)
            if(a[i] <= k)
                ans++;
        
        cout << ans << endl;
    }
    return 0;
}

