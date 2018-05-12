#include <iostream>
#include <fstream>
using namespace std;
#define usefre

int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    #endif

    int a,n=0;
    while(cin>>a)
    n++;
    cout<<n;
}