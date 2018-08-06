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
const int maxn = 10005;
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int n;
    while(cin >> n)
    {
        int num[105];
        int max, maxI, min, minI;
        max = -maxn;
        min = maxn;
        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
            if(num[i] <= min)
            {
                minI = i;
                min = num[i];
            }
            if(num[i] >= max)
            {
                maxI = i;
                max = num[i];
            }
        }
        num[maxI] = num[minI] = 0;
        float ans = 0;
        for(int i = 0 ; i < n; i++)
        {
            ans = ans + num[i];
        }
        printf("%.2f\n", ans / (n - 2));
    }
    return 0;
}
