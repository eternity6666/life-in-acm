#include <cmath>
#include <algorithm>
#include <iostream>
#include <cstdio>
const long long maxn = 1000000000;
using namespace std;

int main()
{
    freopen("in.txt", "r", stdin);
    int T;
    scanf("%d", &T);
    while(T--)
    {
        long long n, a;
        scanf("%lld %lld", &n, &a);
        long long b, c, flag = 0;
        if(n > 2)
            flag = 0;
        else
        {
            long long atmp = pow(a, n);
            for(long long i = a; i <= maxn; i++)
            {
                long long ctmp = pow(i,n);
                long long j;
                for(j = 1; pow(j,n) <= ctmp - atmp ; j++)
                {
                    if(pow(j, n) + atmp == ctmp)
                    {
                        flag = 1;
                        c = i;
                        b = j;
                        break;
                    }
                }
                if(flag) break;
            }
        }
        if(flag)
            printf("%lld %lld\n", b, c);
        else
            printf("-1 -1\n");
    }
    return 0;
}

