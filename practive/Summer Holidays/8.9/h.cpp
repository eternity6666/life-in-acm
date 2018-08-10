#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <cmath>
#include <string>
#include <cstring>
#include <queue>
#include <stack>
#include <fstream>
#include <sstream>
#include <cstdio>
#define usefre

using namespace std;

struct classNode{
    int l;
    int r;
    /*
    int score[maxn];
    int number;
    */
    double average;
   // classNode(int l,int r):l(l), r(r){}
};
const int maxn = 250 + 5;
int n, m, score[maxn] = {0};
vector<int> s;
vector<classNode> c;

bool myComp3(const int &a, const int &b);
bool myComp2(const classNode &a, const classNode &b);
bool myComp1(const classNode &a, const classNode &b);
void divide();

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    cin >> n;
    for(int i = 1; i <= n; i++)
    {
        int tmp;
        cin >> tmp;
        s.push_back(tmp);
    }
    cin >> m;
    for(int i = 1; i <= m; i++)
    {
        classNode classTmp;
        cin >> classTmp.l >> classTmp.r;
        c.push_back(classTmp);
    }

    sort<s.begin(), s.end(), myComp3>;
    sort<c.begin(), c.end(), myComp2>;
    sort<c.begin(), c.end(), myComp1>;
    
    divide();

    double ans = 0;
    vector<classNode>::iterator it;
    for(it = c.begin(); it != c.end(); it ++)
        ans = ans + (*it).average;
    cout << ans << endl;
    return 0;
}

bool myComp3(const int &a, const int &b)
{
    return a > b;
}

bool myComp1(const classNode &a, const classNode &b){
    return (*a).l < (*b).l;
}

bool myComp2(const classNode &a, const classNode &b){
    return (*a).r < (*b).r;
}

void divide()
{
    vector<int>::iterator sit = s.begin();
    vector<classNode>::iterator cit = c.begin();
    while(!s.empty())
    {
        if(cit == c.end())
            break;
        if(s.size() > (*cit).l)
        {
            double sum = 0;
            for(int i = 0; i < (*cit).l; i++, sit++)
            {
                sum = sum + (*sit);
            }
            (*cit).average = sum / (*cit).l;
            sit = s.erase(s.begin(), sit);
            cit++;
        }
    }
}
