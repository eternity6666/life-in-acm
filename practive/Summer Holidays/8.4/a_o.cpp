#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
const int max_n=(1<<14)+5;
int T;
int n;
vector<int> v1,v2;
vector<int> v[max_n];
int x;
int main()
{
    scanf("%d",&T);
    int cas=1;
    while(T--)
    {
        scanf("%d",&n);
        for(int i=1;i<=(1<<n);i++)v[i].clear();
        v1.clear();
        v2.clear();
        for(int i=1;i<=(1<<n);i++)v1.push_back(i);
        for(int i=1;i<=(1<<n);i++)
        {
            for(int j=0;j<n;j++)
            {
                scanf("%d",&x);
                v[i].push_back(x);
            }
            sort(v[i].begin(),v[i].end());
        }
        int a,b;
        int index;
        while(v1.size()>=2)
        {
            for(int i=0;i<v1.size();i+=2)
            {
                a=v1[i],b=v1[i+1];
                if(v[a][v[a].size()-1]>v[b][v[b].size()-1])
                {
                    v2.push_back(a);
                    v[a].erase(upper_bound(v[a].begin(),v[a].end(),v[b][v[b].size()-1]));
                }
                else
                {
                    v2.push_back(b);
                    v[b].erase(upper_bound(v[b].begin(),v[b].end(),v[a][v[a].size()-1]));
                }
            }
            v1=v2;
            v2.clear();
        }
        printf("Case #%d: %d\n",cas++,v1[0]);
    }
    return 0;
}
