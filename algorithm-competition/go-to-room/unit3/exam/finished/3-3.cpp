#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a[10]={0};
    for(int i=0;i<s.length();i++)
    {
        a[s[i]-'0']++;
        // cout<<s[i]-'0'<<endl;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<"出现了"<<a[i]<<"次"<<endl;
    }
    return 0;
}