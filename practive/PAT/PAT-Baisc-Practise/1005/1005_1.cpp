#include <bits/stdc++.h>
using namespace std;

// #define sy //使用freopen()

int main()
{
#ifdef sy
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    set<int> n;
    int k,tmp;
    cin>>k;
    while(cin>>tmp)
    {
        n.insert(tmp);
    }
    set<int>::iterator it1;
    for(it1=n.begin();it1!=n.end();it1++)
    {
        // cout<<*it<<endl;
        int num=*it1;
        while(num!=1)
        {
            if(num%2==0)
            {
                num/=2;
            }
            else
            {
                num=num*3+1;
            }
            //如果num包含于set里,把set里的删掉
            /*
            for(set<int>::iterator it2=n.begin();it2!=n.end();it2++)
            {
                if(num!=*it2)
                {
                    continue;
                }
                else
                {
                    n.erase(it2);
                }
            }
            */
            
            set<int>::iterator it2;
            it2=n.find(num);
            if(it2!=n.end())
            {
                n.erase(it2);
                // cout<<*it2<<endl;
            }
        }
    }
    set<int>::reverse_iterator it3;
    for(it3=n.rbegin();it3!=n.rend();it3++)
    {
        if(it3!=n.rbegin())
        {
            cout<<" ";
        }
        cout<<*it3;
    }
}