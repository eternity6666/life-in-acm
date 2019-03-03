#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main()
{
	bool flag=false;
	int num=0;
	int a,b;
	cin>>a>>b;
	if(a==1)
	{
		a=a+1;
	}
	for(int i=a;i<=b;i++)
	{
		int tmp=sqrt(i);
		int ans=1;
		for(int j=2;j<=tmp;j++)
		{
			if(i%j==0)
			{
				ans+=j+i/j;
			}
		}
		if(ans==i)
		{
			num++;
			if(num==1)
			{
				cout<<i;
			}
			else
			{
			cout<<" "<<i;
			}
			flag=true;
		}
	}
	if(!flag)
	{
		cout<<"None";
	}
	//system("pause");
	return 0;
}

