#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
// #define usefre
struct point
{
    double x;
    double y;
};
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int t;
    cin >> t;
    while (t--)
    {
        point p1, p2, p3;
        cin >> p1.x >> p1.y;
        cin >> p2.x >> p2.y;
        cin >> p3.x >> p3.y;
        //y=mx+n;
        //y=axx+bx+c;
        double a, b, c, m, n, ans;
        a = (p2.y - p1.y) / (p2.x - p1.x) / (p2.x + p1.x - 2 * p1.x);
        b = -2 * a * p1.x;
        c = p1.y - p1.x * p1.x * a - p1.x * b;
        m = (p2.y - p3.y) / (p2.x - p3.x);
        n = p2.y - m * p2.x;
        ans = 1.0 / 3.0 * a * (p3.x * p3.x * p3.x - p2.x * p2.x * p2.x) + 1.0 / 2.0 * (b - m) * (p3.x * p3.x - p2.x * p2.x) + (c - n) * (p3.x - p2.x);
        printf("%.2lf\n",abs(ans));
    }
    return 0;
}