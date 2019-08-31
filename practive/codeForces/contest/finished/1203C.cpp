/*
#include <iostream>
#include <map>
#include <cmath>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        map<long long, long long > ma;
        long long mi = 1e12 + 10;
        for(long long i = 0; i < n; i++)
        {
            long long a; cin >> a;
            mi = mi<a?mi:a;
            for(long long i = 1; i <= mi; i++)
                if(a%i==0)
                    ma[i]++;
        }
        long long ans = 0;
        map<long long, long long>::iterator it;
        for(it = ma.begin(); it != ma.end(); it++)
            if(it->second == n)
                ans++;
        cout << ans << endl;
    }
    return 0;
}
*/

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        long long g;
        cin >> g;
        for(int i = 1; i < n; i++)
        {
            long long tmp; cin >> tmp;
            g = gcd(g, tmp);
        }
        long long ans = 0;
        for(long long i = 1; i <= sqrt(g); i++)
        {
            if(g % i == 0)
                if(g != i * i) ans+=2;
                else ans++;
        }
        cout << ans << endl;
    }
    return 0;
}