#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <set>
using namespace std;
#define ull unsigned long long
// #define usefre
int deal(ull n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ull n;
    while (cin >> n)
    {
        int ans;
        ans = deal(n);
        cout << ans << endl;
    }
}
int deal(ull n)
{
    set<ull> a;
    set<ull>::iterator it;
    for(ull i=2;i<n;i++)
    {
        if(a.find(i)==a.end())
        {
            continue;
        }
        if(n%i==0)
        {
            a.insert(i);
            a.insert(n/i);
        }
    }
    return a.size()+2;
}