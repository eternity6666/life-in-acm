#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>
#include <cstdio>
#define usefre

using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int n;
    while(scanf("%d", &n) == 1)
    {
        double ans = 0;
       // ans = acos(-1) * acos(-1) / 6;
        for(int i = 1; i <= n; i++)
            ans = ans + 1.0 / i / i;
        printf("%.5lf\n", ans);
    }
    return 0;
}
