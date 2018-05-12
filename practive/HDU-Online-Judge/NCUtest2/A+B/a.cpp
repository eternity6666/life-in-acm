#include <iostream>
#include <fstream>
using namespace std;

#define usefre
int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    #endif
    int t,ct;
    // long long sum;
    long long a,b;
    cin>>t;
    ct=t;
    while(t--)
    {
        if(ct-t!=1)
        cout<<endl;
        cout<<"Case "<<ct-t<<":"<<endl;
        cin >>a>>b;
        cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    }
}