#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#define usefre
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif

    double L, k, a, b;
    while(~scanf("%lf %lf %lf %lf", &L, &k, &a, &b))
    {
        double at, bt;
        at = L / a;
        if(L - L / a * b > k)
        {
            if(
        }
        else
            bt = L / b;
        printf("%.lf", bt - at);
    }
    return 0;
}
