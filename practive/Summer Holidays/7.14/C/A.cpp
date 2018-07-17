#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <cmath>
#include <set>
#include <map>
#include <vector>
using namespace std;
#define usefre
#define ull unsigned long long

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ull n;
    cin >> n;
    ull ans=0;
    for(ull i=1;i<pow(2,n);i++)
    {
        ull a=i^4*i;
        a=a^5*i;
        if(a)
        {
            ans++;
        }
    }
    cout<<ans%100000007<<endl;
    return 0;
}