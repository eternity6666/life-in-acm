#include <iostream>
using namespace std;
long long ni, mi, scores;
int main()
{
    long long n, m;
    while(~scanf("%lld %lld", &n, &m))
    {
        ni = mi = scores = -1;
        for(long long i = 1; i <= n; i++)
        {
            for(long long j = 1; j <= m; j++)
            {
                long long num;
                cin >> num;
                if(abs(num) > abs(scores))
                {
                    ni = i;
                    mi = j;
                    scores = num;
                }
            }
        }
        printf("%lld %lld %lld\n", ni, mi, scores);
    }
    return 0;
}
