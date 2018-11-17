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
    int n;
    while(cin >> n)
    {
        int ans = 1;
        for(int i = 0; i < n - 1; i++)
        {
            ans = ans * 2 + 2;
        }
        cout << ans << endl;
    }
    return 0;
}
