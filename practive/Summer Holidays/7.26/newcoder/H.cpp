#include <iostream>
#include <fstream>
#include <cstdio>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;
typedef unsigned long long ull;
ull gcd(ull i,ull j);
bool isDiffPrime(ull i,ull j);
bool isPrime(ull i);
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r",stdin);
    freopen("out.txt", "w",stdout);
#endif
    ull n;
    cin>>n;
    ull ans=0;
    for(int i=2;i<n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(isDiffPrime(i,j))
            {
                ans++;
                // cout<<i<<j<<endl;
            }
        }
    }
    cout<<ans*2<<endl;
return 0;
}

ull gcd(ull i,ull j)
{
    if(i<j)
    {
        ull tmp=i;
        i=j;
        j=tmp;
    }
    while(i%j!=0)
    {
        i=i%j;
        if(i<j)
        {
            ull tmp=i;
            i=j;
            j=tmp;
        }
    }
    return j;
}
bool isPrime(ull i)
{
    if(i==1)
        return false;
    if(i==2)
        return true;
    for(int j=2;j<=sqrt(i);j++)
    {
        if(i%j==0) 
        {
            return false;
        }
    }
    return true;
}

bool isDiffPrime(ull i,ull j)
{
    ull gcdNum=gcd(i,j);
    // cout<<" "<<gcdNum;
    if(isPrime(i/gcdNum)&&isPrime(j/gcdNum)) return true;
    else return false;
}