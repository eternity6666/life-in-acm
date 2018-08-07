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
const int maxn = 1000 + 5;
int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int T;
    cin >> T;
    for(int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        int num[maxn];
        for(int j = 1; j <= n; j++)
        {
            cin >> num[j];
        }
        int q;
        cin >> q;
        int query[maxn * 2];
        for(int j = 1; j <= 2 * n;)
        {
            cin >> query[j ++] >> query[j ++];
        }
    }
    return 0;
}
