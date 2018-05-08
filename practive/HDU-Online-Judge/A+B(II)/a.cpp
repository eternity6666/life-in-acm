#include <iostream>
#include <fstream>
using namespace std;

// #define usefre

int main()
{
    #ifdef usefre
freopen("in.txt","r",stdin);
#endif
int n;
cin>>n;
while(n-->0)
{
    int a,b;
    cin>>a>>b;
    cout<<a+b<<endl;
}
return 0;
}