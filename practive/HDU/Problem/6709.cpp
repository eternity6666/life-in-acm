#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
const int maxn = 1e5 + 10;

long long ve[maxn], n, k;
long long q[maxn];

bool cmp(long long a, long long b)
{
    if(a%k!=b%k)
        return a%k<b%k;
    else
        return a > b;
}

int main()
{
    ios_base::sync_with_stdio(0);
    long long t; cin >> t;
    while(t--)
    {
        cin >> n >> k;
        for(int i = 1; i <= n; i++)
            cin >> ve[i];
        sort(ve+1, ve+1+n, cmp);
        long long ans = k;
        long long len = 0;
        long long x = 0;
        q[++len] = ve[++x];
        long long f = 1;
        while(f<=len)
        {
            long long s = q[f++];
            // cout << s << " ";
            if(x<n)
            {
                if(s<k)
                {
                    long long tmp = 0;
                    for(int i = f; i <= len; i++)
                    {
                        tmp+=q[i];
                        if(tmp>k)
                            break;
                        ans+=q[i];
                        f = i;
                    }
                    ans+=k;
                    q[++len]=ve[++x];
                }
                else
                {
                    ans+=s;
                    long long z = s/k<n-x?s/k:n-x;
                    for(int i = 1; i <= z; i++)
                        q[++len]=ve[++x];
                }
            }
            else ans+=s;
        }
        cout << ans << endl;
    }
    return 0;
}
