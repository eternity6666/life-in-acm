#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    long long n;
    unsigned long long ah, am, as, bh, bm, bs;
    cin >> n;
    while(n--)
    {
        cin >> ah >> am >> as >> bh >> bm >> bs;
        am = am + (as + bs) / 60;
        as = (as + bs) % 60;
        ah = ah + (am + bm) / 60;
        am = (am + bm) % 60;
        ah = ah + bh;
        printf("%llu %llu %llu\n", ah, am, as);
    }
    return 0;
}
