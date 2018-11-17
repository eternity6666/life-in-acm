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

    int T;
    cin >> T;
    while(T--)
    {
        long long k1, k2;
        cin >> k1 >> k2;
        //vector<long> tmp1, tmp2;
        long long i = 2;
        long long ans1 = 1, ans2 = 1;
        while(k1 >= i)
        {
            long long flag = 0;
            while(k1 % i == 0)
            {
                flag ++;
                k1 = k1 / i;
            }
            if(flag)
            {
                ans1 = flag * ans1;
                // tmp1.push_back(flag);
            }
            i ++;
        }
        i = 2;
        while(k2 >= i)
        {
            long long flag = 0;
            while(k2 % i == 0)
            {
                flag ++;
                k2 = k2 / i;
            }
            if(flag)
            {
                ans2 = flag * ans2;
                // tmp2.push_back(flag);
            }
            i ++;
        }
        cout << ans1 << " " << ans2 << endl;
    }
    return 0;
}
