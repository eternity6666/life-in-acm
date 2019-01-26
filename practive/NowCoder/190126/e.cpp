#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);

    int t, n, m;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        int ans = 0;
        if(m % 2)
            ans = n * m - 2;
        else
            ans = n * (m - 1) - 1;
        cout << ans << endl;
    }
    return 0;
}

