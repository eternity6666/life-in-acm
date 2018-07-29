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
    while(t--)
    {
        int a[4];
        for( int i = 0; i < 4; i++ )
        {
            cin >> a[i];
        }
        for( int i = 0; i < 4; i++ )
        {
            int max = -10;
            int maxTmp = 0;
            for( int j = i; j < 4; j++ )
            {
                if( max < a[j])
                {
                    max = a[j];
                    maxTmp = j;
                }
            }
            int tmp = a[i];
            a[i] = a[maxTmp];
            a[maxTmp] = tmp;
        }
        cout << a[0] * a[1] - a[2] * a[3] << endl;
    }
    return 0;
}
