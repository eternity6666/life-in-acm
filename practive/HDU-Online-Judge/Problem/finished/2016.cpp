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
const int maxn = 105;
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int n;
    while(cin >> n && n)
    {
        int num[maxn];
        int min, minI;
        min = maxn;
        for(int i = 0; i < n; i++)
        {
            cin >> num[i];
            if(num[i] < min)
            {
                minI = i;
                min = num[i];
            }
        }
        num[minI] = num[0];
        num[0] = min;
        cout << num[0];
        for(int i = 1; i < n; i++)
        {
            cout << " " << num[i];
        }
        cout << endl;
    }
    return 0;
}
