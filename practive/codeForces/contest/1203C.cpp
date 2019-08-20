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
