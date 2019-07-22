#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    //定义map对象，当前没有任何元素
    map<int ,char> m;
    for(int i=0;i<10;i++)
    {
        m[i]='0'+i;
    }
    int n=2;
    string s="The number is ";
    cout<<s+m[n]<<endl;
    
    return 0;
}