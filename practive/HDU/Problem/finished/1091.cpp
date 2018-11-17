#include <iostream>
#include <cstdio>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    long long a,b;
    while(scanf("%lld %lld",&a,&b)==2&&(a!=0||b!=0))
    {
        cout<<a+b<<endl;
    }
    return 0;
}