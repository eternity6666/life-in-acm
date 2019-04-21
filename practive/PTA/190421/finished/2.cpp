#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1e6 + 5;

int n;
long long q;
long long score[maxn];
long long sum[maxn];

// long long get(double a);
int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> q;
    sum[0] = 0;
    fei(1, n)
    {
        scanf("%lld", &score[i]);
        sum[i] = sum[i - 1] + score[i];
    }
    while(q--)
    {
        long long l, r;
        // cin >> l >> r;
        scanf("%lld %lld", &l, &r);
        // cout << (sum[r] - sum[l - 1]) / (r - l + 1) << endl;
        printf("%lld\n", (sum[r] - sum[l - 1]) / (r - l + 1));
        /*
        double ans = 1.0 * (sum[r] - sum[l - 1]) / (r - l + 1);
        //cout << ans << endl;
        cout << (long long)ans << endl;
        cout << get(ans) << endl;
        */
    }
    return 0;
}

/*
long long get(double a)
{
    return (long long)a > a ? (long long)a - 1 : (long long)a;
}
*/

