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

const int maxn = 50 + 1;
char r[maxn], c[maxn];

bool readin();
void solve();

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    while(readin())
    {
        solve();
    }
    return 0;
}

bool readin()
{
    memset(r, '', sizeof(r));
    memset(c, '', sizeof(c));
    if(!getline(cin, r))
        return false;
    if(!getline(cin, c))
        return false;
    return true;
}

void solve{
    
    
}
