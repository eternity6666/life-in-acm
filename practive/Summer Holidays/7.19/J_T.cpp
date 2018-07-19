#include <iostream>
#include <vector>
#include <cstdio>
#include <string>
#include <cstring>
#include <set>
#include <map>
#include <fstream>
#include <sstream>
using namespace std;
// #define usefre
typedef unsigned long long ull;
ull maxmax(ull, ull);
ull minmin(ull, ull);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    unsigned long long q, n;
    while (cin >> n >> q)
    {
        set<unsigned long long> nv;
        unsigned long long tmp;
        while (n-- && cin >> tmp)
        {
            nv.insert(tmp);
        }
        unsigned long long tmp1, tmp2;
        while (q-- && cin >> tmp1 >> tmp2)
        {
            ull ans = 0;
            set<ull>::iterator it;
            for (it = nv.begin(); it != nv.end(); it++)
            {
                /*
                if(*it<=tmp1||*it>tmp2)
                {
                    ans++;
                }
                else continue;
                */
                if (*it > tmp1 && *it < tmp2)
                {
                    ans++;
                }
                else
                    continue;
            }
            cout << nv.size() - ans << endl;
        }
    }
    return 0;
}
ull maxmax(ull a, ull b)
{
    if (a < b)
        return b;
    else
        return a;
}
ull minmin(ull a, ull b)
{
    if (a > b)
        return b;
    else
        return a;
}