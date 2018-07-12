#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n,m;
    while(cin>>n>>m)
    {
        double ans=0;
        double n_tmp=(double)n;
        while(m--)
        {
            ans+=n_tmp;
            n_tmp=sqrt(n_tmp);
        }
        printf("%.2lf\n",ans);
    }
    return 0;
}