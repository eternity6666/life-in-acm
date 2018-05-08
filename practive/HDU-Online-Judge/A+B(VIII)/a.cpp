#include <iostream>
#include <fstream>
using namespace std;

// #define usefre

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif

int a,b,c,sum;
cin>>a;
int m=a;
while(a--)
{
    cin>>b;
    if(a!=m-1)
    cout<<endl;
    sum=0;
    while(b--)
    {
        cin>>c;
        sum+=c;
    }
    cout<<sum<<endl;
}

return 0;
}