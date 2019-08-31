#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstring>
#include <cstdio>
#include <vector>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
using namespace std;
// #define usefre
double calculate1(int);
double calculate2(int);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    cin>>t;
    while(t--)
    {
        int numCase=0;
        int m,n;
        while(cin>>n>>m)
        {
            cout<<"Case #"<<++numCase<<": ";
            double nAns=calculate1(n);
            double mAns=calculate2(m);
            printf("%.6lf %.6lf\n",nAns,mAns);
        }
    }
}

double calculate1(int n)
{
    double ans=0;
    if(n == 1) ans = 1.0;
    else ans=1.0/2.0;
    return ans;
}

double calculate2(int m)
{
    double ans=0;
    ans=(double)(1+m)/2/m;
    return ans;
}