#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    double a;
    while (cin >> a)
    {
        if (a < 0)
            a = -a;
        printf("%.2lf\n", a);
    }
    return 0;
}