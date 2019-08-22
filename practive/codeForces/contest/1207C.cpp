#include <iostream>
#include <vector>
using namespace std;
const int maxn = 2e5 + 10;

int n, l[maxn], r[maxn];
long long a, b;
string s;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> a >> b >> s;
        int len=0;
        long long ans = 0;
        for(int i = 0, j; i < n; i=j)
        {
            for(j = i; j < n; j++)
                if(s[i]!=s[j])
                    break;
            if(s[i]=='0') l[len] = i, r[len++] = j;
            else
                ans = ans + (j-i)*a + 2*(j-i-1)*b;
        }
        for(int i = 0; i < len; i++)
        {
            ans=ans+(r[i]-l[i])*(a+b)+b;
            long long mi = 0;
            if(l[i]==0&&r[i]==n)
                mi = 0;
            else if((l[i]==0) || (r[i] == n))
                mi = (a+b)<(r[i]-l[i]+1)*b?(a+b):(r[i]-l[i]+1)*b;
            else
                mi = (2*a+2*b)<(r[i]-l[i]+1)*b?(2*a+2*b):(r[i]-l[i]+1)*b;
            ans+=mi;
            // cout << (l[i]==0||r[i]==n) << " ";
            // cout << r[i] << " " << l[i] << ": ";
            // cout << (r[i]-l[i])*(a+b)+b<< " " << mi << endl;
        }
        cout << ans << endl;
    }
    return 0;
}
