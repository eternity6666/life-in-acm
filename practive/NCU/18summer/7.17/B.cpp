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
int x,y;
double jiaoDu(int x1, int y1,int x2,int y2,int x3,int y3);
double juLi(int x1,int y1,int x2,int y2);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    int flag = 0;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "Case #" << ++flag << ": ";
        vector<int> a;
        int tmp1, tmp2;
        while (n--&&cin>>tmp1>>tmp2)
        {
            a.push_back(tmp1);
            a.push_back(tmp2);
        }
        cin>>x>>y;


        // cout<<endl;
        

        vector<int>::iterator it;
        double ans=0;
        for(it=a.begin();it!=a.end();it+=2)
        {
            int x1,y1,x2,y2,x3,y3;
            x1=*it;
            y1=*(it+1);
            if(it==a.end()-2)
            {
                x2=*(a.begin());
                y2=*(a.begin()+1);
                x3=*(a.begin()+2);
                y3=*(a.begin()+3);
            }
            else if(it==a.end()-4)
            {
                x2=*(it+2);
                y2=*(it+3);
                x3=*(a.begin());
                y3=*(a.begin()+1);
            }
            else{
                x2=*(it+2);
                y2=*(it+3);
                x3=*(it+4);
                y3=*(it+5); 
            }
            double jd,jl;
            jd=acos(-1)-jiaoDu(x1,y1,x2,y2,x3,y3);
            jl=juLi(x,y,x2,y2);
            ans+=jd*jl;
        }
        printf("%.3lf\n",ans);
    }
    return 0;
}
double jiaoDu(int x1, int y1,int x2,int y2,int x3,int y3)
{
    double a,b,c;
    a=juLi(x1,y1,x2,y2);
    b=juLi(x2,y2,x3,y3);
    c=juLi(x3,y3,x1,y1);
    // return  acos(a/2/b+b/2/a-c*c/2/a/b);
    double tmp;
    // cout<<x1<<y1<<x2<<y2<<x3<<y3<<":"<<endl;
    // cout<<a<<" "<<b<<" "<<c<<":";
    tmp=a*a+b*b-c*c;
    // cout<<tmp<<endl;
    // cout<<2*a*b<<endl;
    return acos(tmp/(2*a*b));

}
double juLi(int x1,int y1,int x2,int y2)
{
    return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}