#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
	int n;
	for(int n = 1; n <= 100; n++)
	{
		double ans = 0.000001;
		for(int i = 1; i < n; i++)
			ans *= 0.999999;
		printf("%.11lf\n",ans);
	}
	return 0;
}
