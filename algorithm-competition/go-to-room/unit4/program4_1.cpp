#include <bits/stdc++.h>
using namespace std;


#define ull unsigned long long 

ull factorial(int m);
int main()
{
    int m,n;
    cin>>n>>m;
    ull ans;
    ans=factorial(n)/(factorial(m)*factorial(n-m));
    cout<<ans<<endl;
    return 0;    
}

ull factorial(int m)
{
    ull ans=1;
    for(int i=1;i<=m;i++)
    {
        ans*=i;
    }
    // cout<<ans<<endl;
    return ans;
}