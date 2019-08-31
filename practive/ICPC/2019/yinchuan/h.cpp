#include <iostream>
#include <algorithm>
using namespace std;
typedef long long ll;
const int maxn = 1e5 + 10;

struct node
{
    ll hp, num, atk;
} mon[maxn];

bool cmp(node a, node b)
{
    return a.num * b.atk != a.atk * b.num ? a.num * b.atk < a.atk * b.num : a.atk > b.atk;
}

int got(int k)
{
    int s = 1, ans = 0;
    while (k > 0)
    {
        ans++;
        k -= s;
        s++;
    }
    return ans;
}

int main()
{
    int t, ca = 0;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> mon[i].hp >> mon[i].atk;
            mon[i].num = got(mon[i].hp);
        }
        sort(mon, mon + n, cmp);
        ll count = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            count += mon[i].num;
            sum += mon[i].atk * count;
        }
        printf("Case #%d: %lld\n", ++ca, sum);
    }
    return 0;
}
