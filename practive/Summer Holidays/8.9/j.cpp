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
    int n, m;
    cin >> n >> m;
    char s[maxn][maxn];
    for(int i = 0; i < n; i++)
    {
        scanf("%s", &s[i]);
    }
    int cnt = n * m;
   

    return 0;
}
