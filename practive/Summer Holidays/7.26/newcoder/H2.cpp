#include <iostream>
#include <vector>
#include <cmath>
#include <cstring>
#include <cstdio>
using namespace std;
typedef unsigned long long ull;
vector<ull> gotPrime(ull n);
const int N=10e7;

int main()
{
    ull n;
    cin>>n;
    vector<ull> a=gotPrime(n);
    vector<ull>::iterator it;
    ull num[N]={0};
    ull sum[N]={0};
    ull isNewNum=0;
    ull sumTmp=0;
    ull i=0;
    for(it=a.begin();it!=a.end();it++)
    {
        if(isNewNum!=n/(*it))
        {
            isNewNum=n/(*it);
            num[++i]++;
        }
        else
        {
            num[i]++;
        }
            sumTmp++;
            sum[i]=sumTmp;
    }
    for(ull j=1;j<=i;j++)
    {
        cout<<sum[i]<<" ";
    }
    cout<<endl;
    return 0;
}

vector<ull> gotPrime(ull n)
{
    vector<ull> ans;
    bool flag[N+1];
    ull c,size=0;
	memset(flag, true, sizeof(flag));
	for(ull i=2;i<N/2;i++){
		flag[2*i]=false;
	}
	for(ull i=1;i<N/2;i++){
		c=2*i+1;
		if(flag[c]==true){
			for(ull t=2;t<N;t++){
				flag[c*t]=false;
				if(c*t>N)
				  break;
			}
		}
		if(c>sqrt(N))
		   break;
	}
	for(ull i=2;i<n;i++){
		if(flag[i]==true)
        ans.push_back(i);
	}
    return ans;
}