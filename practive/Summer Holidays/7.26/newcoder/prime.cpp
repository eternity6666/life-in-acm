#include<iostream>
#include<stdio.h>
#include<math.h>
#include<cstring>
#define N 10000000
using namespace std;
bool flag[N+1];
int main(){
	long long c,size=0;
	memset(flag, true, sizeof(flag));
	for(long long i=2;i<N/2;i++){
		flag[2*i]=false;
	}
	for(long long i=1;i<N;i++){
		c=2*i+1;
		if(flag[c]==true){
			for(long long t=2;t<N;t++){
				flag[c*t]=false;
				if(c*t>N)
				  break;
			}
		}
		if(c>sqrt(N))
		   break;
	}
	for(long long i=2;i<N;i++){
		if(flag[i]==true)
		   cout<<i<<" ";
	}
}
