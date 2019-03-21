#include <iostream>
#include <cstdio>
using namespace std;
long long got_ans(long long n);
int main()
{
    long long N;
    while(~scanf("%lld", &N))
    {
        long long ans = 1;
        ans = got_ans(N);
        printf("%lld", ans);
    }
    return 0;
}

long long got_ans(long long n)
{
    if(n == 0)
        return 1;
    else
        return n * got_ans(n - 1);
}
