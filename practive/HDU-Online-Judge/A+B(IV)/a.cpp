#include <iostream>
#include <fstream>
using namespace std;

// #define usefre

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif
int n,a,sum;
while(cin>>n&&n)
{
    sum=0;
    while(n--)
    {
        cin>>a;
        sum+=a;
    }
    cout<<sum<<endl;
}
return 0;
}