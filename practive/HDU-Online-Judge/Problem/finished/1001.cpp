#include <iostream>
#include <fstream>
using namespace std;
long sum(long);
int main()
{
    // freopen("in.txt","r",stdin);
    long n;
    int flag=0;
    while(cin>>n)
    {
        cout<<sum(n)<<endl<<endl;
    }
    return 0;
}
long sum(long n)
{
    long ans=0;
    for(long i=0;i<=n;i++)
    {
        ans+=i;
    }
    return ans;
}