/* TLE
#include <iostream>
using namespace std;
const int maxn = 4e3 + 10;

int main()
{
    int n; cin >> n;
    int a[4], b[4];
    for(int i = 0; i < 3; i++)
    {
        cin>>a[i];
        b[i]=n/a[i];
    }
    int ans = 0;
    for(int i = 0; i <= b[0]; i++)
    {
        if(i*a[0]>n)
            break;
        if(i*a[0]+b[1]*a[1]+b[2]*a[2]<n)
            continue;
        for(int j = 0; j <= b[1]; j++)
        {
            if(i*a[0]+j*a[1]>n)
                break;
            if(i*a[0]+j*a[1]+b[2]*a[2]<n)
                continue;
            for(int k = 0; k <= b[2]; k++)
                if(i*a[0]+j*a[1]+k*a[2]==n)
                    ans=ans>(i+j+k)?ans:(i+j+k);
        }
    }
    cout << ans << endl;
    return 0;
}
*/

#include <iostream>
#include <cmath>
#include <cstring>
#include <algorithm>
using namespace std;
const int maxn = 4010;

int a[4];
int dp[maxn];

int main()
{
    int n; cin >> n;
    for(int i = 0; i < 3; i++) cin >> a[i];
    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < 3; j++)
            if(i-a[j]>=0&&dp[i-a[j]]!=-1)
                dp[i] = max(dp[i], dp[i-a[j]]+1);
    }
    cout << dp[n] << endl;
    return 0;
}