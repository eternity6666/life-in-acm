#include<bits/stdc++.h>
using namespace std;
const int M=10000010;
bool  a[M];
int  sum[M];
int main()
{
  int i,j,n,m;
  long long ans=0;
  scanf("%d",&n);
  
  memset(a,1,sizeof a);//素数筛选法
  a[1]=0;
  for(i=2; i<=n; i++)
    if(a[i])
    {
       for(j=2;j*i<=n;j++)
        a[j*i]=0;
    }
 
    for(i=2;i<=n;i++)//记录一共有多少个素数
        if(a[i]) ans++,sum[i]=ans;//sum[i] i点之前有一共多少个素数
       
    ans=ans*(ans-1);//素数对
    for(i=n;i>=3;i--)
    {
        if(a[i])//素数
        {
            int t=n/i;//有多少个可满足条件的 素数倍数
            t--;sum[i]--;//减去素数本身 
            ans+=(2*t*sum[i]);//新增的非素数对 *2是因为（4.6）（6.4）；
        }
    }printf("%lld\n",ans);
 
 
}
