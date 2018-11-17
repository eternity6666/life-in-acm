#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
#define usefre
typedef unsigned long ul;
using namespace std;
vector<ul> gotPrime(ul n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    return 0;
    ul n;
    cin>>n;
    vector<ul> allPrime = gotPrime(n);
    vector<ul> san;
    vector<ul> sumDivided;
    ul isNewSan=0;
    sumDivided.push_back(0);
    vector<ul>::iterator it;
    for(it=allPrime.begin();it!=allPrime.end();it++)
    {
        if((n/(*it))!=isNewSan)
        {
            san.push_back(n/(*it));
        }
    }
}

vector<ul> gotPrime(ul n)
{
    vector<ul> ans;
    ans.push_back(2);
    for (int i = 3; i <= n; i = i + 2)
    {
        ans.push_back(i);
    }
    vector<ul>::iterator it = ans.begin();
    while (it != ans.end())
    {
        vector<ul>::iterator itTmp = it + 1;
        while (itTmp != ans.end())
        {
            if ((*itTmp) % (*it) == 0)
            {
                itTmp = ans.erase(itTmp);
            }
            else
            {
                itTmp++;
            }
        }
        it++;
    }
    return ans;
}
