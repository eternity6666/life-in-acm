#include <bits/stdc++.h>
using namespace std;
#define usefre

void deal(vector<int> a);
int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int n,m,u,v;
    cin>>n>>m;
    vector<int> array;
    while(m--)
    {
        cin>>u>>v;
        array.push_back(u);
        array.push_back(v);
    }
    deal(array);
    return 0;

}

void deal(vector<int> a)
{
    int ans=0;
    vector<int>::iterator it;
    for(it=a.begin();it!=a.end();it++)
    {
        
    }
    cout<<ans;
}
