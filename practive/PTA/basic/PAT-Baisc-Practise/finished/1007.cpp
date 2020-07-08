#include <bits/stdc++.h>
using namespace std;
// #define usefre

vector<int> panduan(int n);
int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int n;
    cin>>n;
    vector<int> num;
    num=panduan(n);
    int answer=0;
    vector<int>::iterator it;
    for(it=num.begin();it!=num.end();it++)
    {
        // cout<<*it<<endl;
        if(*(it+1)-*it==2)
        answer++;
    }
    cout<<answer;
}

vector<int> panduan(int n)
{
    vector<int> num;
    for(int i=3;i<=n;i+=2)
    {
        int j=3;
        for(;j<=sqrt(i);j++)
        {
            if(i%j==0)
            break;
        }
        if(j>sqrt(i))
        {
            num.push_back(i);
        }
        else
        continue;
    }
    vector<int> it;
    return num;
}