#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <set>
#include <map>
#include <cmath>
#include <queue>
#include <stack>
#define usefre
using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    int T;
    cin >> T;
    while(T--)
    {
        long n;
        cin >> n;
       // vector<long> a,b;
        set<long> c;
        for(int i = 0; i < n; i++)
        {
            long tmp;
            cin >> tmp;
           // a.push_back(tmp);
            c.insert(tmp);
        }
        for(int i = 0; i < n; i++)
        {
            long tmp;
            cin >> tmp;
           // b.push_back(tmp);
            c.insert(tmp);
        }
        cout << c.size() - 1 << endl;
    }
    return 0;
}
