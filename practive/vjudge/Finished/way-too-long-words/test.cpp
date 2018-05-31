#include <bits/stdc++.h>
using namespace std;

// #define usefre

int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif

    // vector<string> s;
    string tmp;
    int n;
    cin>>n;
    while(n--&&cin>>tmp)
    {
        if(tmp.length()<=10)
        {
            cout<<tmp<<endl;
        }
        else
        {
            cout<<tmp[0];
            int i=tmp.length()-2;
            cout<<i<<tmp[tmp.length()-1]<<endl;
        }
    }
    return 0;
}