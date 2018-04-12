//author:阳作华;
//date:2018-04-12 16:40;
//address:JiangXi China;

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int m;
    m=n/100+n%10*100+n%100/10*10;
    cout<<m;
}