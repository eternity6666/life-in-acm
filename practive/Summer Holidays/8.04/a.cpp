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
#define IT vector<singer>::iterator 
using namespace std;
struct singer{
    int num;
    set<int> song;
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
        vector<singer> a;
        int nTmp = pow(2, n);
        for(int j = 1; j <= nTmp; j++)
        {
            singer tmp;
            tmp.num = i;
            for(int k = 1; k <= n; k++)
            {
                int tmp2;
                cin >> tmp2;
                tmp.song.insert(tmp2);
            }
            a.push_back(tmp);
        }
        for(int j = 1; j <= n; j++)
        {
            vector<singer>:: iterator it, it2 ,it3;
            for(it = a.begin(); it != a.end(); it++)
            {
            }
        }
        printf("Case #%d: %d",i , (*a.begin()).num );
    }
    return 0;
}
