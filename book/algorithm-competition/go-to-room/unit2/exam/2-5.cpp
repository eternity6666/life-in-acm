#include <bits/stdc++.h>
using namespace std;

#define usefre

void deal(int c,int b,int a);

int main()
{
    #ifdef usefre
    freopen("2-5-in.txt","r",stdin);
    freopen("2-5-out.txt","w",stdout);
    #endif
    vector<int> num;
    int tmp;
    while(cin>>tmp&&tmp)
    {
        num.push_back(tmp);
    }
    vector<int>::iterator it;
    int array_number=num.size()/3;
    for(it=num.begin();it!=num.end();)
    {
        cout<<"Case "<<num.size()/3-array_number--+1<<": ";
        deal(*it++,*it++,*it++);
        cout<<endl;
    }
}

void deal(int c,int b,int a)
{
    /*
    cout<<endl;
    cout<<a<<endl<<b<<endl<<c<<endl;
    float answer;
    answer=1.0*a/b;
    C和C++自带的浮点运算不能算出题意,因此采用手工算法
    */
    cout<<a/b<<'.';
    for(int i=1;i<c;i++)
    {
        cout<<a*10/b;
        a=a*10%b;
    }
    if(a*10%b*10/b>=5)
    cout<<a*10/b+1;
    else
    cout<<a*10/b;
}