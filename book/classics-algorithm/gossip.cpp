#include <bits/stdc++.h>

using namespace std;

unsigned long long f(int n);
int main()
{
    int n;
    cin>>n;
    unsigned long long ans;
    ans=f(n);
    cout<<ans<<endl;
}

unsigned long long f(int n)
{
    if(n==0||n==1)
    {
        return n;
    }
    else return f(n-1)+f(n-2);
}