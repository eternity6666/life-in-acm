#include <iostream>
#include <fstream>
using namespace std;

// #define usefre

int main()
{
    #ifdef usefre
freopen("in.txt","r",stdin);
#endif
    int a,b;
    while(cin>>a>>b)
    cout<<a+b<<endl;
    return 0;

}