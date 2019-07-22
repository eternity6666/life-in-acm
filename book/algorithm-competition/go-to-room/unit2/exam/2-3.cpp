#include <bits/stdc++.h>
using namespace std;

#define usefre

void out_space(int i);
void out_sign(int i);
int main()
{
#ifdef usefre
    // freopen("2-3-ins.txt", "r", stdin);
    freopen("2-3-out.txt", "w", stdout);
#endif

int n;
cin>>n;
int m;
m=2*n-1;
for(int i=0;i<n;i++)
{
    if(i)
    cout<<endl;
    out_space(i);
    out_sign(m-2*i);
}
return 0;
}

void out_space(int i)
{
    for(int j=0;j<i;j++)
    cout<<" ";
}
void out_sign(int i)
{
    for(int j=0;j<i;j++)
    cout<<"#";
}