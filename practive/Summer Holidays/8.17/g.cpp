#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
#include <fstream>
#include <sstream>
#define usefre
using namespace std;

const int maxn = 1000000 + 5;
    
double s[maxn];
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif
 
    double a;
    scanf("%lf", &a);
    int n;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
        scanf("%lf", &s[i]);
    s[0] = 0;
    double buy = s[0];
    return 0;
}
