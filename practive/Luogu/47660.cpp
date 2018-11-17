#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        long double ans = 0;
        if(n > 500)
        {
            ans = ans + (n - 500) * 0.0733333;
            n = 500;
        }
        if(n > 150)
        {
            ans = ans + (n - 150) * 0.0800000;
            n = 150;
        }
        ans = ans + (n - 0) * 0.0855555;
        printf("%.6Lf", ans);
    }
    return 0;
}
