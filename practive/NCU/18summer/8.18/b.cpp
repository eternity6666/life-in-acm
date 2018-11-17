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
    int n;
    while(~scanf("%d", &n))
    {
        int ans = 0;
        int tmp, tmped, tmpeded;
        tmp = tmped = tmpeded = 0;
        for(int i = 0; i < n; i++)
        {
            scanf("%d", &tmp);
            if(i >= 2)
            {
                if(tmpeded <= tmped && tmped > tmp)
                {
                    ans++;
                }
            }
            tmpeded = tmped;
            tmped = tmp;
        } 
        printf("%d\n", ans);
    }
    return 0;
}
