#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define usefre
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int t;
    cin >> t;
    while( t-- )
    {
        int n, m;
        cin >> n >> m;
        vector<long> integers;
        for(int i = 0; i < n; i++)
        {
            long tmp;
            cin >> tmp;
            integers.push_back(tmp);
        }
        while(m != 0)
        {
            //deal
        }
        if(isAchieve(integers))
        {
            cout << -1 <<endl;
        }
        else
        {
            long max = 0;
            vector<long>::iterator it;
            for(it = integers.begin(); it != integers.end(); it++)
            {
                if((*it) > max)
                {
                    max = *it;
                }
            }
            cout << max << endl;
        }
    }
    return 0;
}

bool isAchieve(vector<long> n)
{
    int mode;
    vector<long>::iterator it;
    long isNewInteger = 0;
    for(it = n.begin(); it != n.end(); it++)
    {
        
    }
}
