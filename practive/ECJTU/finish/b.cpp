#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int q, n;
    scanf("%d", &q);
    while(q--)
    {
        scanf("%d", &n);
        set<ll> se;
        ll sum = 0;
        for(int i = 0; i < n; i++)
        {
            ll tmp;
            scanf("%lld", &tmp);
            sum+=tmp;
            se.insert(tmp);
        }
        ll avg = sum / n + (sum%n==0?0:1);
        cout << avg << endl;
    }
    return 0;
}