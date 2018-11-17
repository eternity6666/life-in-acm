#include <iostream>
#include <cmath>
#include <cstdio>
// #define usefre
using namespace std;
int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    float a,b,c,d;
    while(cin>>a>>b>>c>>d)
    {
        float tmp=(a-c)*(a-c)+(b-d)*(b-d);
        printf("%.2lf\n",sqrt(tmp));
    }
    return 0;
}