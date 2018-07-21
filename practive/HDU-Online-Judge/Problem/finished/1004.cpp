#include <bits/stdc++.h>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    int n;
    while(cin>>n&&n)
    {
        map<string,int> elements;
        while(n--)
        {
            string tmp;
            cin>>tmp;
            if(elements.find(tmp)!=elements.end())
            {
                elements[tmp]++;
            }
            else
            {
                elements[tmp]=1;
            }
        }
        map<string,int>::iterator it,ittmp;
        int max=-1000;
        for(it=elements.begin();it!=elements.end();it++)
        {
            if((*it).second>max)
            {
                max=(*it).second;
                ittmp=it;
            }
        }
        cout<<(*ittmp).first<<endl;
    }
    return 0;
}