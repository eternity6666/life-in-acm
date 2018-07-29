#include <iostream>
#include <cstdio>
#include <fstream>
#include <string>
#include <vector>
// #define usefre
typedef unsigned long ul;
using namespace std;
vector<ul> gotPrime(ul n);

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ul n;
    cin >> n;
    //get all prime from 2 to n
    vector<ul> allPrime = gotPrime(n);
    //use n to divide prime to san
    // vector<sanStr> s;
    vector<ul> san;
    vector<ul> sumDivided;
    vector<ul>::iterator it;
    ul isNewSan = 0;
    sumDivided.push_back(0);
    for (it = allPrime.begin(); it != allPrime.end(); it++)
    {
        if ((n / (*it)) != isNewSan)
        {
            ul tmp = *(sumDivided.end() - 1);
            sumDivided.push_back(tmp + 1);
            isNewSan = n / (*it);
            san.push_back(n / (*it));
            // sanStr *sTmp = new sanStr;
            // (*sTmp).san = isNewSan = n / (*it);
            // (*sTmp).n = 1;
            // s.push_back(*sTmp);
            // delete sTmp;
        }
        else
        {
            (*(sumDivided.end() - 1))++;
            // (*(s.end() - 1)).n++;
        }
    }
    // for (it = sumDivided.begin(); it != sumDivided.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // cout << endl;
    // for (it = san.begin(); it != san.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    // cout << endl;
    ul ans = 0;
    it = sumDivided.begin()+1;
    vector<ul>::iterator it2 = san.begin();
    while (it2 != san.end())
    {
        ul tmp=0;
        // cout<<*it<<" "<<*it2<<" ";
        tmp=(*it)*(*it-1)/2*(*it2);
        ans+=tmp;
        it2++;
        it++;
        // cout<<tmp<<endl;
    }
    cout << 2*ans << endl;
    //count the num of the same san and count the number of we need
    //ans=all(need/2*(need-1))
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
