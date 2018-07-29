#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define usefre
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while(t--)
    {
        long n;
        cin >> n;
       // cout << n << "::::"<<endl;
        unsigned long long m = 1;
        unsigned long long ans = 0;
        for(long i = 1; i <= n; i++)
        {
            if( i > 1)
                m = m * i *(n - i + 1)/(i - 1)/(i - 1);
            //cout << tmp << endl;
            ans += m;
            //cout << ans << " ";
        }
        cout << ans % 1000000007 << endl;
    }
    return 0;
}
