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

string ans[2] = {"Bad", "Balanced"};

int deal(int n);

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif

    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int answer = deal(n);
        cout << ans[answer] << endl;
    }
    return 0;
}

int deal(int n)
{
    if(n % 2 == 0)
        return 0;
    else return 1;
}
