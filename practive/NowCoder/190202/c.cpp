#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100000 + 5;

long long n, m;;
long long a[maxn];
long long b[maxn];
bool cmp(long long x, long long y)
{
    return x > y;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> m;
    fei(1, m)
        cin >> a[i];
    fei(1, m)
        cin >> b[i];
    vector<long long> ve;
    fei(1, m)
    {
        fej(1, a[i])
        {
            // int tmp = b[i];
            ve.push_back(b[i]);
        }
    }
    sort(ve.begin(), ve.end(), cmp);
    long long ans = 0;
    vector<long long>::iterator it = ve.begin();
    for(long long i = 1; i <= n; i++, it++)
        ans = ans + (*it);

    cout << ans << endl;
    return 0;
}

