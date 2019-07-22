//对数字的各位进行分离，采用取余等方法操作是很耗时的
//可以将数字当成字符串，使用map的映照功能，实现数字分离
#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    //定义map对象，当前没有任何元素
    map<char,int> m;
    /*
    m['0']=0;
    m['1']=1;
    m['2']=2;
    m['3']=3;
    m['4']=4;
    m['5']=5;
    m['6']=6;
    m['7']=7;
    m['8']=8;
    m['9']=9;
    */
   //上下两种方法效果一样
    for(int j=0;j<10;j++)
    {
        m['0'+j]=j;
    }
    string sa;
    sa="1234554321";
    int i=0;
    int sum=0;
    for(i=0;i<sa.length();i++)
    {
        sum+=m[sa[i]];
    }
    cout<<"sum = "<<sum<<endl;
    return 0;
}