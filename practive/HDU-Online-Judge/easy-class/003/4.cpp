#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <fstream>
#include <algorithm>
#define usefre
struct homework{
    int deadlines;
    int scores;
};
bool Comp1 (const homework &a, const homework &b);
bool Comp2 (const homework &a, const homework &b);
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
        int n;
        cin >> n;
        vector<homework> h;
        for(int j = 0; j < n; j++)
        {
            struct homework tmp;
            cin >> tmp.deadlines;
            h.push_back(tmp);
        }
        vector<homework>::iterator it;
        for(it = h.begin(); it != h.end(); it++)
        {
            cin >> (*it).scores;
        }
        sort(h.begin(), h.end(), Comp2);
        sort(h.begin(), h.end(), Comp1);
        int day = 0;
        int reduced = 0;
        it = h.begin();
        while(it != h.end())
        {
            cout << (*it).deadlines <<" "<< (*it).scores <<endl;
            it++;
        }
    }
    return 0;
}
bool Comp1 (const homework &a, const homework &b)
{
    return a.deadlines < b.deadlines;
}
bool Comp2 (const homework &a, const homework &b)
{
    return a.scores > b.scores;
}
