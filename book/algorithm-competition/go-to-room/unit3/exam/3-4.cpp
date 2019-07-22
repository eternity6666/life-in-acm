#include <iostream>
#include <string.h>
#include <cstring>
using namespace std;

int main()
{
    string a;
    cin >> a;
    int i,flag,j;
    for(i=1;i<a.length();i++)
    {
        flag=1;
        if(a.length()%i == 0)
        {
            for(j=i;j<a.length();j++)
            {
                if(a[j-i] != a[j])
                {
                    flag=0;break;
                }
            }
            if(flag)
            {
                cout<<i<<endl;
                break;
            }
        }
    }
    
    return 0;
}