#include <cstdio>
#include <algorithm>
#include <fstream>
using namespace std;
typedef long long ll;
#define maxn 500005
int n, x[maxn], a[maxn];
ll T, sum[maxn];
ll count(int l, int r, int numl, int numr);
bool check(ll k);
int main()
{
    freopen("in.txt", "r", stdin);
    while (~scanf("%d%lld", &n, &T))
    {
        T /= 2;
        for (int i = 1; i <= n; i++)
            scanf("%d", &x[i]);
        for (int i = 1; i <= n; i++)
            scanf("%d", &a[i]), sum[i] = sum[i - 1] + a[i];
        ll l = 1, r = sum[n], mid, ans;
        while (l <= r)
        {
            mid = (l + r) / 2;
            if (check(mid))
                ans = mid, l = mid + 1;
            else
                r = mid - 1;
        }
        printf("%lld\n", ans);
    }
    return 0;
}

ll count(int l, int r, int numl, int numr)
{
    if (l == r)
        return numr - numl;
    return sum[r - 1] - sum[l] + a[l] - numl + numr;
}

bool check(ll k)
{
    int l = 1, r = n + 1, numl = 0, numr = 0;
    ll cost = 0, num = 0;
    for (int i = 1; i <= n; i++)
        if (num + a[i] <= k)
        {
            num += a[i];
            cost += (ll)(x[i] - x[1]) * a[i];
        }
        else
        {
            r = i;
            numr = k - num;
            cost += (ll)(x[i] - x[1]) * numr;
            break;
        }
    if (cost <= T)
        return 1;
    for (int i = 2; i <= n; i++)
    {
        cost += (ll)(x[i] - x[i - 1]) * (count(l, i, numl, 0) - count(i, r, 0, numr));
        while (r <= n && x[i] - x[l] > x[r] - x[i])
        {
            int num = min(a[l] - numl, a[r] - numr);
            cost += (ll)((x[r] - x[i]) - (x[i] - x[l])) * num;
            numl += num;
            if (numl == a[l])
                l++, numl = 0;
            numr += num;
            if (numr == a[r])
                r++, numr = 0;
        }
        if (cost <= T)
            return 1;
    }
    return 0;
}