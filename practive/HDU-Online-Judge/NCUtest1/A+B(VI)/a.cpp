#include <iostream>
#include <fstream>
using namespace std;

#define usefre

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif

int a,b,sum;
while(cin>>a)
{
    sum=0;
    while(a--)
    {
        cin>>b;
        sum+=b;
    }
    cout<<sum<<endl;
}
return 0;
}
