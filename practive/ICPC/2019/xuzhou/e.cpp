/*
#include <bits/stdc++.h>
using namespace std;

vector<int> dp;
vector<int> w;
int n, m;
int findx(int a, int b, int x)
{
    cout << a << " " << b << " " << x << " "; 
    for(int i = b; i >= a; i--)
        if(w[i] + m > x)
        {
            cout << i << endl;
            return i;
        }
    cout << endl;
    return 0;
}

int main()
{
    cin >> n >> m;
    w.resize(n+3);
    for(int i = 1; i <= n; ++i) cin >> w[i];
    dp.resize(n+3);
    dp[n] = -1;
    for(int i = n-1; i > 0; --i)
        if(w[i] > w[i-1])
            dp[i] = findx(i+1, i+2+dp[i+1], w[i]) - i - 1;
        else if(w[i] == w[i-1])
            dp[i] = dp[i+1] + 1;
        else
            dp[i] = findx(i+2+dp[i+1], n, w[i]) - i - 1;
    for(int i = 1; i <= n; ++i)
        cout << dp[i] << (i==n?"\n":" ");
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> ve;
int n, m;

int fin(int l, int r, int x)
{
    for(int i = r; i >= l; --i)
        if(ve[i] >= x + m)
            return i;
    return -1;
}

int main()
{
    cin >> n >> m;
    ve.resize(n + 3);
    for(int i = 1; i <= n; ++i) cin >> ve[i];
    vector<int> dp(n+3);
    dp[n] = -1;
    for(int i = n - 1; i > 0; --i)
    {
        if(ve[i] == ve[i+1])
            dp[i] = dp[i+1] + 1;
        else if(ve[i] < ve[i+1])
            dp[i] = fin(i+2+dp[i+1], n, ve[i]) - i - 1;
        else
        {
            int x = fin(i+1, i+2+dp[i+1], ve[i]);
            if(x==-1)
                dp[i] = -1;
            else
                dp[i] = x - i - 1;
        }
    }
    for(int i = 1; i <= n; ++i)
        cout << dp[i] << (i==n?"\n":" ");
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
vector<int> ve;
int n, m;
int fin(int i)
{
    for(int j = n; j >= i; --j)
        if(ve[j] >= ve[i]+m)
            return j - i - 1;
    return -1;
}
int main()
{
    scanf("%d%d", &n, &m);
    ve.resize(n);
    for(int i = 1; i <= n; ++i)
        scanf("%d", &ve[i]);
    for(int i = 1; i < n; ++i)
        printf("%d ", fin(i));
    printf("%d\n", fin(n));
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 5e5 + 10;
int n, m;
int ve[maxn];
void fin(int i)
{
    for(int j = n; j >= i; --j)
        if(ve[j] >= ve[i]+m)
        {
            cout << j - i - 1;
            return ;
        }
    cout << -1;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    cin >> n >> m;
    for(int i = 1; i <= n; ++i)
        cin >> ve[i];
    for(int i = 1; i <= n; ++i)
    {
        fin(i);
        cout << (i==n?"\n":" ");        
    }
    return 0;
}
*/

#include <bits/stdc++.h>
using namespace std;
int n, m;
vector<int> ve;
vector<int> ans;
void fin(int i)
{
    if(i == 1 || ans[i-1] == -1)
    {
        for(int j = n; j >= i; --j)
            if(ve[j] >= ve[i] + m)
            {
                cout << (ans[i] = j - i - 1) << " ";
                return;
            }
    }
    else
    {
        if(ve[i] == ve[i-1])
        {
            cout << (ans[i] = ans[i-1] -1) << " ";
            return ;
        }
        else if(ve[i] > ve[i-1])
        {
            for(int j = ans[i-1] + i; j >= i; --j)
                if(ve[j] >= ve[i] + m)
                {
                    cout << (ans[i] = j - i - 1) << " ";
                    return ;
                }
        }
        else
        {
            for(int j = n; j >= ans[i-1]+i; --j)
                if(ve[j] >= ve[i] + m)
                {
                    cout << (ans[i] = j - i - 1) << " ";
                    return ;
                }
        }
    }
    cout << (ans[i] = -1) << " ";
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(); cout.tie();
    cin >> n >> m;
    ve.resize(n);
    ans.resize(n);
    for(int i = 1; i <= n; ++i)
        cin >> ve[i];
    for(int i = 1; i < n; ++i)
        fin(i);
    cout << -1 << endl;
    return 0;
}
