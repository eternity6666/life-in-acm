#include <bits/stdc++.h>
using namespace std;

#define usefre

int main(){
    #ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
    #endif
    vector<string> tanzhu;
    vector<string> xiaohong;
    string tmp;
    getline(cin,tmp);
    tanzhu.push_back(tmp);
    // getchar();
    getline(cin,tmp);
    xiaohong.push_back(tmp);
    vector<string>::iterator it1,it2;
    multiset<char> tz,xh;
    for(int i=0;i<*it1.size();i++)
    {
        tz.insert(*it1[i]);
    }
    for(it2=tanzhu.begin();it2!=tanzhu.end();it2++)
    {
        xh.insert(*it1);
    }
}