#include <bits/stdc++.h>
// #include <set>
using namespace std;
// #define usefre

int main()
{
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    int n,tmp;
    multiset<int> s;
    multiset<int>::iterator it;
    int cnt;
    while(cin>>n)
    {
        cnt=0;
        // cout<<n<<endl;
        s.clear();
        while(cnt<n&&cin>>tmp)
        {
            cnt++;
            s.insert(tmp);
        }
        for(it=s.begin();it!=s.end();it++)
        {
            cout<<*it<<" ";
        }
        cout<<endl;
    }
    
   
    return 0;
}

