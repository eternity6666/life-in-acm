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
        unsigned long long n;
        cin >> n;
        unsigned long long ans = 0;
        queue<unsigned long long> a;
        a.push(n);
        while(a.size() != n)
        {
            if(a.front() == 1)
            {
                a.push(a.front());
                a.pop();
            }
            else if(a.front() == 0)
            {
                a.pop();
            }
            else
            {
                unsigned long long aTmp = a.front();
                unsigned long long tmp1, tmp2;
                tmp1 = aTmp / 2;
                tmp2 = aTmp - tmp1;
                a.push(tmp1);
                a.push(tmp2);
                ans += tmp1 * tmp2;
                a.pop();
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
