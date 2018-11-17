#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
double deal(int a);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int m;
    cin>>m;
    while(m--)
    {
        int a;
        cin>>a;
        double ans;
        ans=deal(a);
        printf("%.2lf\n",ans);
    }
    return 0;
}
double deal(int a)
{
    double sign=1;
    double ans=0;
    for(int i=1;i<=a;i++)
    {
        ans+=sign/i;
        sign=-sign;
    }
    return ans;
}