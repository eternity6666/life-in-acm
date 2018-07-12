#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
#define PI 3.1415927
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    double a;
    while (cin >> a)
    {
        printf("%.3lf\n", 4 * PI / 3 * a * a * a);
    }
    return 0;
}