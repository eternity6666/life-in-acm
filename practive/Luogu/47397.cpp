#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long max = -1000000000000;
    long long n;
    while(~scanf("%lld", &n))
    {
        while(n--)
        {
            long long tmp;
            scanf("%lld", &tmp);
            if(tmp > max)
                max = tmp;
        }
        cout << max << endl;
    }
    return 0;
}
