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

int k;
int gotIJ(int a, int b);
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int n, m;
    cin >> n >> m >> k;
    int ans = 0;
    for(int i = 0; i <= n; i++)
    {
        int ansTmp = 0;
        int a = i % 2;
        if(a == 0)
        {
            a = 1;
            for(int j = 0; j <= m; j++)
            {
                int b = 0;
                if(j % 2 != 0) continue;
                else b = 1;
                ansTmp = (ansTmp + gotIJ(i, j)) % k;
            }
        }
        ans = (ans + ansTmp) % k;
    }
    cout << ans % k << endl;
    return 0;
}

int gotIJ(int a, int b)
{
    int ans = 0;

    return an % k;
}
