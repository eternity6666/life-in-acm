#include <bits/stdc++.h>
using namespace std;

vector<long long> sum;
vector<int> a;
void update2(int l, int r, int x)
{
    for(int i = l; i <= r; ++i)
    {
        a[i] = a[i] ^ x;
        sum[i] = a[i] + sum[i-1];
    }
}
void update3(int l, int r, int x)
{
    for(int i = l; i <= r; ++i)
    {
        a[i] = a[i] | x;
        sum[i] = a[i] + sum[i-1];
    }
}
void update4(int l, int r, int x)
{
    for(int i = l; i <= r; ++i)
    {
        a[i] = a[i] & x;
        sum[i] = a[i] + sum[i-1];
    }
}

int main()
{
    int n; cin >> n;
    a.resize(n+3);
    sum.resize(n+3);
    sum[0] = 0;
    for(int i = 1; i <= n; ++i)
    {
        cin >> a[i];
        sum[i] = a[i] + sum[i-1];
    }
    int m; cin >> m;
    while(m--)
    {
        int op, l, r;
        cin >> op >> l >> r;
        if(op == 1)
            cout << sum[r] - sum[l-1] << endl;
        else
        {
            int x; cin >> x;
            if(op == 2)
                update2(l, r, x);
            else if(op == 3)
                update3(l, r, x);
            else if(op == 4)
                update4(l, r, x);
        }        
    }
    return 0;
}
