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
    for(int i = 1; i <= T; i++)
    {
        int c, z, m;
        cin >> c >> z >> m;
        int cz = pow(c, z);
        vector<int> zi;
        for(int i = 1; i <= sqrt(cz); i++)
        {
            if(cz % i == 0)
            {
                zi.push_back(i);
                if(cz/i != i) zi.push_back(cz/i);
            }
        }
        map<int, int> geshu;
        for(int i = 1 ; i <= m; i++)
        {
            int tmp;
            for(int j = 0 ; j <= m; j++)
            {
                if(j == 0)
                    tmp = 1;
                else
                    tmp = tmp * i;
                if(tmp > cz)
                {
                    break;
                }
                if(geshu.find(tmp) != geshu.end())
                {
                    geshu[tmp]++;
                }
                else
                {
                    geshu[tmp] = 1;
                }
            }
        }
        int ans = 0;
        vector<int>::iterator it;
        for(it = zi.begin(); it != zi.end(); it ++)
        {
            if(it == zi.end() - 1)
            {
                ans = ans + geshu[*it] * geshu[*it];
            }
            else
            {
                ans = ans + 2 * geshu[*it] * geshu[*(++it)];
            }
        }
        printf("Case #%d: %d\n", i, ans);
    }
    return 0;
}

