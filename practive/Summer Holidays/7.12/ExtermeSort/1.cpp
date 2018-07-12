#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include <set>
using namespace std;
#define ull unsigned long long
#define usefre
int deal(ull n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    while(cin>>n)
    {
        vector<int> a;
        int tmp;
        while(n--&&cin>>tmp)
        {
            a.push_back(tmp);
        }
        int flag;
        
        string ans[]={"no","yes"};
        cout<<ans[flag]<<endl;
    }
    return 0;
}