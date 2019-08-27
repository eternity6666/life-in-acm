/*
#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 2010;

int a[maxn];
bool v[maxn];
int n, l, r;

int main()
{
    cin >> n;
    memset(v, 0, sizeof(v));
    for(int i = 0; i < n; i++)
        cin >> a[i];
    for(int i = 0; i < n; i++)
    {
        if(v[a[i]]==0)
        {
            l = i;
            v[a[i]] = 1;
        }
        else
            break;
    }
    memset(v, 0, sizeof(v));
    for(int j = n - 1; j >= 0; j--)
    {
        if(v[a[j]]==0)
        {
            r = j;
            v[a[j]]=1;
        }
        else break;
    }
    r--; l++;
    if(r>l)
        cout << r - l+1 << endl;
    else cout << 0 << endl;
    return 0;
}
*/

/*
#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 2010;

int a[maxn];
int ll[maxn];
bool v[maxn];
int rr[maxn];
int n;

int main()
{
    cin >> n;
    for(int i = 1; i <= n; i++) cin >> a[i];
    memset(ll, -1, sizeof(ll));
    int r = -1;
    for(int i = 1; i <= n; i++)
    {
        if(ll[a[i]]==-1)
            ll[a[i]] = i;
        else
            r = ll[a[i]];
            
    }
    memset(rr, -1, sizeof(rr));
    int l = -1;
    for(int i = n; i >= 1; i--)
    {
        if(rr[a[i]]==-1)
            rr[a[i]]=i;
        else l = rr[a[i]];
    }
    // cout << l << " " << r << endl;
    cout << (r==l?0:(r<l?l-r:r-l)+(a[r]==a[l]?0:1)) << endl;
    return 0;
}
*/

/*
#include <iostream>
using namespace std;

int a[2010], n;

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    if (n == 1)
    {
        cout << 0 << endl;
        return 0;
    }
    int mi = 2010;
    for (int l = 2; l <= n; l++)
    {
        for (int r = l; r <= n; r++)
        {
            bool flag = true;
            for (int i = 1; i < l; i++)
            {
                for (int j = i + 1; j < l; j++)
                    if (a[i] == a[j])
                    {
                        flag = false;
                        break;
                    }
                if (!flag)
                    break;
                for (int j = r + 1; j <= n; j++)
                    if (a[i] == a[j])
                    {
                        flag = false;
                        break;
                    }
                if (!flag)
                    break;
            }
            if (!flag)
                continue;
            for (int i = r + 1; i <= n; i++)
            {
                for (int j = i + 1; j <= n; j++)
                    if (a[i] == a[j])
                    {
                        flag = false;
                        break;
                    }
                if (!flag)
                    break;
            }
            if (flag)
            {
                mi = mi > r - l?r-l:mi;
            }
        }
    }
    cout << mi << endl;
    return 0;
}
*/

#include <iostream>
#include <map>
using namespace std;

const int maxn = 2010;
int n, a[maxn];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> a[i];

    int ans = n - 1;
    map<int, int> ma;
    for(int i = 0; i < n; ++i)
    {
        bool v = true;
        for(int j = 0; j < i; ++j)
        {
            ma[a[j]]++;
            if(ma[a[j]] == 2)
            {
                v = false;
                break;
            }
        }
        int mi = n;
        for(int j = n - 1; j >= i; --j)
        {
            ma[a[j]]++;
            if(ma[a[j]]==1) mi = j;
            else break;
        }
        if(v)
            ans = ans < mi - i ? ans : mi - i;
        ma.clear();
    }
    cout << ans << endl;        
    return 0;
}
