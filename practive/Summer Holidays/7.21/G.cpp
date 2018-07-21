#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
#define usefre
typedef struct
{
    ull x;
    int a;
} container;
ull minNum(ull a, ull b);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long n;
    ull T;
    cin >> n >> T;
    container cTmp;
    vector<container> c;
    while (n-- && cin >> cTmp.x)
    {
        c.push_back(cTmp);
        // cout<<cTmp.x<<endl;
    }
    int aMax;
    vector<container>::iterator it, maxIt;
    for (it = c.begin(); it != c.end(); it++)
    {
        cin >> (*it).a;
        if (it == c.begin())
        {
            aMax = (*it).a;
            maxIt = it;
        }
        else
        {
            if (aMax < (*it).a)
            {
                aMax = (*it).a;
                maxIt = it;
            }
        }
        // cout<<(*it).a<<endl;
    }
    // cout<<aMax<<endl;
    T = T / 2;
    vector<container>::iterator itLeft, itRight;
    ull ans = aMax;
    itLeft = maxIt - 1;
    itRight = maxIt + 1;
    while (T > 0)
    {
        if (itLeft >= c.begin() && itRight < c.end())
        {
            ull xLeft, xMax, xRight;
            xMax = (*maxIt).x;
            xLeft = (*itLeft).x;
            xRight = (*itRight).x;
            if ((xMax - xLeft) < (xRight - xMax))
            {
                if ((*itLeft).a > 0)
                {
                    //the max number itLeft can give
                    //minNum:min of xLeft and T/(xMax-Left)
                    ull da = minNum((*itLeft).a, T / (xMax - xLeft));
                    T = T - da * (xMax - xLeft);
                    (*itLeft).a = (*itLeft).a - da;
                    ans += da;
                }
                else
                {
                    itLeft--;
                }
            }
            else
            {
                if ((*itRight).a > 0)
                {
                    ull da = minNum((*itRight).a, T / (xRight - xMax));
                    T = T - da * (xRight - xMax);
                    (*itRight).a = (*itRight).a - da;
                    ans += da;
                }
                else
                {
                    itRight++;
                }
            }
        }
        else if (itLeft < c.begin() && itRight < c.end())
        {
            ull xMax, xRight;
            xMax = (*maxIt).x;
            xRight = (*itRight).x;
            if ((*itRight).a > 0)
            {
                ull da = minNum((*itRight).a, T / (xRight - xMax));
                T = T - da * (xRight - xMax);
                (*itRight).a = (*itRight).a - da;
                ans += da;
            }
            else
            {
                itRight++;
            }
        }
        else if (itLeft >= c.begin() && itRight == c.end())
        {
            ull xLeft, xMax;
            xMax = (*maxIt).x;
            xLeft = (*itLeft).x;
            if ((*itLeft).a > 0)
            {
                //the max number itLeft can give
                //minNum:min of xLeft and T/(xMax-Left)
                ull da = minNum((*itLeft).a, T / (xMax - xLeft));
                T = T - da * (xMax - xLeft);
                (*itLeft).a = (*itLeft).a - da;
                ans += da;
            }
            else
            {
                itLeft--;
            }
        }
    }
    cout << ans << endl;
    return 0;
}
ull minNum(ull a, ull b)
{
    if (a > b)
        return b;
    else
        return a;
}