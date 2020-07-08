#include <iostream>
#include <string>
#include <cmath>
#include <fstream>
using namespace std;

#define fre1 freopen("./tmp1.txt","r",stdin)
#define fre2 freopen("./tmp2.txt","r",stdin)


int main()
{
    fre1;
    int n;
    cin>>n;//朋友圈个数
    // cout<<n<<endl;
    int k;
    cin>>k;
    // cout<<k<<endl;
    int stu[1000];
    for(int i=0;i<k;i++)
    {
        cin>>stu[i];
        // cout<<stu[i]<<endl;
    }
    int m;
    cin>>m;
    int panduan[10000];
    for(int i=0;i<m;i++)
    {
        cin>>panduan[i];
        // cout<<panduan[i]<<endl;
    }
    int z=0;
    for(int i=0;i<m;i++)
    {
        int j=0;
        for(;j<k;j++)
        {
            if(panduan[i]==stu[j])
            {
                break;
            }
        }
        if(j==k)
        {
            z++;
            cout<<panduan[i]<<endl;
        }
    }
    if(!z)
    {
        cout<<"No one is handsome"<<endl;
    }
    return 0;
}