#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

double got(double a)
{
    return sqrt(a);
}

int main()
{
    freopen("in.txt", "r", stdin);
    long long l1, l2;
    long long t;
    cin >> l1 >> l2;
    double a, b;
    a = got((l1 - l2) * (l1 - l2));
    b = got((l1 + l2) * (l1 + l2));
    double c;
    cin >> t;
    while(t--)
    {
        double x, y;
        cin >> x >> y;
        c = got(x * x + y * y);
        double ans = 0;
        if(c >= a && c <= b)
            ans = 0;
        else if (c < a)
            ans = a - c;
        else
            ans = c - b;
        printf("%.8lf\n", ans);
    }
    return 0;
}

