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
struct point{
    int x;
    int y;
};

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        double ans = 0;
        point p1,p2; 
        for(int i = 0; i < n; i++)
        {
            if(i == 0)
            {
                cin >> p1.x >> p1.y;
                ans += 0;
            }
            else
            {
                cin >> p2.x >> p2.y;
                ans += (double) (p2.x - p1.x) / 2 * (p1.y + p2.y);
                p1 = p2;
            }
        }
        printf("%.6lf\n", ans);
    }
    return 0;
}
