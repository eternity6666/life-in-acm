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
struct f{
    string name;
    int values;
};
struct myComp{
    bool operator () (const int& a, const int& b) {
        if(a != b) return a > b;
        else return a > b;
    }
};
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
        map<string,int> friends;
        for(int i = 0; i < k; i++)
        {
            string s;
            int i;
            cin >> s >> i;
            friends[s] = i;
        }
        vector<f> qq;
        int mtmp = m;
        int ed = 0;//进去的人数
        while(mtmp --)
        {
            int t, p;
            cin >> t >> p;
            ed = ed + min(p, friends.size());
            sort(friends.begin() + ed, friends.begin() + t - ed - 1, myComp);
            map<string, int
            while(p--)
            {
                f tmp;
                tmp.name = (*it).first;
                tmp.value = (*it).second;
                it = friends.erase(it);
            }
            /*
            while(p--)
            {
                sort(map.begin() + ed, min(map.begin() + ed + p, map.end()), myComp);

            }
            */
        }
        vector<f>::iterator it;
        it = qq.begin();
        for(int i = 0; i < 1; i++)
        {
            int th;
            cin >> th;
            if(i) cout << " ";
            cout << (*(it + th - 1)).name;
        }
        cout << endl;
    }
    return 0;
}
