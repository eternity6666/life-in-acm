#include <bits/stdc++.h>
using namespace std;

// #define syfre
int main()
{
#ifdef syfre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
int n,ws[3];
cin>>n;
ws[0]=n/100;
ws[1]=n/10%10;
ws[2]=n%10;
for(int i=0;i<3;i++)
{
    if(ws[i]==0)
    {
        continue;
    }
    else
    {
        for(int j=1;j<=ws[i];j++)
        {
            if(i==0)
            {
                cout<<'B';
            }
            else if(i==1)
            {
                cout<<'S';
            }
            else{
                cout<<j;
            }
        }
    }
}
}