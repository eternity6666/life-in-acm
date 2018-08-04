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
struct singer {
    int num;
    int song[14];
    int max;
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
        for(int j = 1; j <= pow(2, n); j++)
        {
            singer tmp;
            tmp.num = j;
            for(int k = 1; k <= n; k++)
            {
                cin >> tmp.song[k];
            }
            for(int k = 1; k <= n; k++)
            {
                for(int l = k; l <= n; k++)
                {
                    if(tmp.song[k] < tmp.song[l])
                    {
                        int tmp2;
                        tmp2 = tmp.song[k];
                        tmp.song[k] = tmp.song[l];
                        tmp.song[l] = tmp2;
                    }
                }
            }
            max = tmp.song[0];
            a.push_back(tmp);
        }
        for(int j = 1; j <= n; j++)
        {
            vector<singer>::iterator it;
            for(it = a.begin(); it != a.end();)
            {
                vector<singer>::iterator itTmp;
                itTmp = it + 1;
                if((*itTmp).max > (*it).max)
                {

                    it = a.erase(itTmp);
                }
                else
                {

                    it = a.erase(it);
                    it ++;
                }
            }
        }
        int ans = 0;
        printf("Case #%d: %d\n", i, ans);
    }
    return 0;
}
