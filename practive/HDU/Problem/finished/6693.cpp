#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn = 1e4 + 10;

double a[maxn];

int main()
{
    // ios_base::sync_with_stdio(0); cin.tie(); cout.tie();
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        for(int i=1; i<=n; i++) scanf("%lf", &a[i]);
        sort(a+1, a+n+1);
        double s=0, f=1;
        for(int i=n; i>0; i--)
            if(s*(1-a[i])+f*a[i]>s)
                s = s*(1-a[i])+f*a[i], f*=(1-a[i]);
        printf("%.12lf\n", s);
    }
    return 0;
}
