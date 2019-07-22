#include <iostream>
#include <fstream>
using namespace std;

#define usefre
#define maxn 10000000+10

int main()
{
#ifdef usefre
freopen("in.txt","r",stdin);
#endif
float max,min,tmp,sum=0,n=0;
max=-maxn;
min=maxn;
while(cin>>tmp)
{
    n++;
    sum+=tmp;
    if(max<tmp)
    max=tmp;
    if(min>tmp)
    min=tmp;
}
cout<<max<<endl;
cout<<min<<endl;
cout<<sum/n<<endl;
}