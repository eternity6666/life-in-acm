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
struct myComp
{
    bool operator () (const int &a, const int &b)
    {
        if(a != b) return a > b;
        else return a > b;
    }
};
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int t;
    cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int n;
        cin >> n;
        map<int, set<int, myComp> > a;
        int ntmp = pow(2, n);
        for(int j = 1 ; j <= ntmp; j++)
        {
            set<int, myComp> tmp;
            for(int k = 1; k <= n; k++)
            {
                int tmp2;
                cin >> tmp2;
                tmp.insert(tmp2);
            }
            a[j] = tmp;
        }
        for(int j = 1; j <= n; j++)
        {
            map<int, set<int, myComp> >::iterator it;
            for(it = a.begin(); it != a.end();)
            {
                map<int, set<int, myComp> >::iterator itTmp;
                itTmp = ++it;
                it--;
                int aMax = *((*it).second.begin());
                int bMax = *((*itTmp).second.begin());
                if(aMax > bMax)
                {
                    //删除set里面的元素
                    (*it).second.erase((*it).second.upper_bound(bMax));
                    it = a.erase(itTmp);
                }
                else
                {
                    (*itTmp).second.erase((*itTmp).second.upper_bound(aMax));
                    it = a.erase(it);
                    it ++ ;
                }
            }
        }
        printf("Case #%d: %d",i ,(*a.begin()).first);
    }
    return 0;
}
