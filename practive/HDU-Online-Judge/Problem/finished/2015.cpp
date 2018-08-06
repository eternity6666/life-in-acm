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
    int n, m;
    while(cin >> n >> m)
    {
        int ans = 0;
        int ii = 0;
        int flag = 0;
        for(int i = 2;i <= 2 * n; i = i + 2)
        {
            ii++;
            ans += i;
            if(ii == m)
            {
                if(flag)
                    cout << " ";
                cout << (float)ans / m ;
                ans = 0;
                flag++;
                ii = 0;
            }
        }
        if(ii != 0)
        {
            if(flag)
                cout << " ";
            cout << (float)ans / ii << endl;
        }
        else
            cout << endl;
    }
    return 0;
}
