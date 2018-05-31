#include <bits/stdc++.h>
using namespace std;

// #define usefre
#define ll long long
#define ull unsigned long long

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    ull n, m, a;
    // while(cin>>n>>m)
    // {
    cin >> n >> m;
    if (n < m)
    {
        a = m;
        m = n;
        n = a;
    }
    cin >> a;
    ull ans = 0;
    ans += (n / a) * (m / a);
    if ((n - n / a * a) < a && (n - n / a * a))
    {
        ans += m / a;
    }
    if ((m - m / a * a) < a && (m - m / a * a))
    {
        ans += n / a;
    }
    if ((n - n / a * a) < a && (m - m / a * a) < a && (m - m / a * a) && (n - n / a * a))
    {
        ans++;
    }
    cout << ans << endl;
    // }
    return 0;
}