#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn = 2e5 + 10;
typedef long long ll;
ll n, k;
ll x;
vector<ll> a;

bool check(ll x)
{
    ll sum = 0;
    for(int i = n / 2; i < n; i++)
    {
        sum = sum + max(0ll, x - a[i]);
        if(sum > k)
            return false;
    }
    return sum <= k;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    while(cin >> n >> k)
    {
        a.clear();
        for(int i = 1; i <= n; ++i)
        {
            cin >> x;
            a.push_back(x);
        }
        sort(a.begin(), a.end());
        ll small = 1;
        ll big = 2e9;
        while(small != big)
        {
            ll mid = (small + big + 1) / 2;
            check(mid)?(small=mid):(big=mid-1);
            //cout << small << ' ' << big <<endl;
        }
        cout << small << endl;
    }
    return 0;
}
