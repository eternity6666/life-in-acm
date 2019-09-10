/*
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

bool cmp(P a, P b)
{
    if(a.first - a.second != b.first - b.second)
        return a.first - a.second > b.first - b.second;
    return a.first > b.first;
}

void solve()
{
    int n, x;
    cin >> n >> x;
    set<P, cmp> se;
    int mad = 0, madh = 0;
    for(int i = 0; i < n; i++)
    {
        int d, h; cin >> d >> h;
        if(d > h)
        {
            mad = max(mad, d);
            madh = max(madh, d - h);
            se.insert(P(d, h));
        }
    }
    if(madh == 0)
        cout << 0 << endl;
    else
    {
        int most = x / madh;
        int ans = 0;
        for(int i = most; i >= 0 && x - i * madh <= mad; --i)
        {

        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
// typedef pair<int, int> P;

// bool cmp(P a, P b)
// {
//     if(a.first - a.second != b.first - b.second)
//         return a.first - a.second > b.first - b.second;
//     return a.first > b.first;
// }

void solve()
{
    int n, x; cin >> n >> x;
    int mad = -1, madh = -1, dd, hh;
    for(int i = 0; i < n; i++)
    {
        int d, h; cin >> d >> h;
        mad = max(mad, d);
        if(d > h)
        {
            if(d - h > madh)
                dd = d, hh = h, madh = d - h;
            else if(d > dd)
                dd = d, hh = h;
        }
    }
    if(madh == -1)
        cout << -1 << endl;
    else
    {
        int ans = x / madh;
        if(x % madh == 0)
            cout << ans << endl;
        else
        {
            ans -= 1;
            int tmp = x - ans * madh;
            if(tmp <= mad)
                cout << ans + 1 << endl;
            else
                cout << ans + 2 << endl;
        }
    }
}

int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;
    int mad = -1, madh = -1;
    while (n--)
    {
        int d, h;
        cin >> d >> h;
        mad = max(mad, d);
        madh = max(madh, d - h);
    }
    if (x <= mad)
        cout << 1 << endl;
    else if (madh <= 0)
        cout << -1 << endl;
    else
    // {
        // cout << (x-mad)/madh << endl;
        // cout << ((x-mad)%madh==0?0:1) << endl;
        cout << (x-mad)/madh + ((x-mad)%madh==0?0:1) + 1 << endl;
    // }
        // cout << (x - mad + madh - 1) / madh + 1 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
