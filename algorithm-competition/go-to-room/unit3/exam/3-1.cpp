#include <iostream>
#include <fstream>
using namespace std;
#define usefre

int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    #endif
    int a=1,sum=0;
    char tmp;
    while(cin>>tmp)
    {
        if(tmp=='O')
        {
            sum+=a;
            a++;
        }
        else{
            sum+=0;
            a=1;
        }
    }
    cout<<sum<<endl;
    return 0;
}