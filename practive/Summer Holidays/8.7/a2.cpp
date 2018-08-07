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
struct FF{
    string name;
    int values;
    /*
    bool operator > (const FF &a) const 
    {
        return values > a.values;
    }
    */
};

bool myComp (const FF& a, const FF& b)
{
    /*
    if(a.values != b.values) return a > b;
    else return a > b;
    */
    return a.values > b.values;
}
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
        int k, m, q;
        cin >> k >> m >> q;
        vector<FF> friends;
        for(int i = 0; i < k; i++)
        {
            FF tmp;
            cin >> tmp.name >> tmp.values;
            friends.push_back(tmp);
        }
        vector<FF> que;
        vector<FF>::iterator it;
        //mode
        it = friends.begin();
        for(int i = 0; i < m; i++)
        {
            int t, p;
            cin >> t >> p;
            sort(friends.begin(), friends.begin() + t - 1, myComp);
            while(p--)
            {
                que.push_back(friends[0]);
                it = friends.erase(it);
                if(it == friends.end())
                    break;
            }
        }
        //query
        it = que.begin();
        for(int i = 0; i < q; i++)
        {
            int th;
            cin >> th;
            if(i) cout << ' ';
            cout << (*(it + th - 1)).name;
        }
        cout << endl;
    }
    return 0;
}
