#include <iostream>
#include <cstdio>
#include <vector>
#include <cstring>
#include <string>
#include <fstream>
using namespace std;
//#define usefre

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int t;
    cin >> t;
    int caseNum = 0;
    for(int j = 1; j <= t; j++)
    {
        long n;
        cin >> n;
        int nArray[100005] = {0};
        cout << "Case " << ++caseNum << ":" <<endl;
        int left, right,lTmp,rTmp;
        long maxTmp = 0,max = -10000;
        lTmp = 1;
        for(int i = 1; i <= n; i++)
        {
            int tmp;
            cin >> tmp;
            maxTmp += tmp;
            if(maxTmp >= max)
            {
                left = lTmp;
                max = maxTmp;
                right = i;
            }
            if(maxTmp < 0)
            {
                maxTmp = 0;
                lTmp = i + 1;
            }
        }
        cout << max << " " << left << " " << right << endl;
        if(j != t)
        {
            cout<<endl;
        }
    }
    return 0;
}
