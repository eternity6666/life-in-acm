#include <iostream>
#include <fstream>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
    long n;
    cin>>n;
    unsigned long long t;
    cin>>t;
    long x[500005];
    int a[500005];
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
return 0;
}