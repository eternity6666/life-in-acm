#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

vector<int> ve;

int main()
{
    freopen("in.txt", "r", stdin);
    string tmp;
    map<string, int> m;
    m["1"] = 1;
    m["2"] = 2;
    m["10"] = 10;
    m["3"] = 3;
    m["9"] = 9;
    m["8"] = 8;
    m["7"] = 7;
    m["6"] = 6;
    m["5"] = 5;
    m["4"] = 4;
    m["J"] = 11;
    m["Q"] = 12;
    m["K"] = 13;

    while(cin >> tmp)
    {
        int x;
        x = m[tmp];
        ve.push_back(x);
    }
    if(ve.size() != 52)
        cout << -1 << endl;
    else
    {
        vector<int> ans;
        vector<int> tmp;
        vector<int>::iterator it;
        for(it = ve.begin(); it != ve.end(); it++)
        {
            if(it == ve.begin())
                ans.push_back(*it);
            else
            {
                if(*it >= ans.size())
                {
                    ans.push_back(*it);
                }
                else
                {

                }
            }
        }

        for(it = ans.begin(); it != ans.end(); it++)
        {
            //string s = gots(*it);
            if(it == ans.begin())
                cout << *it;
            else
                cout << " " << *it;
        }
    }
    return 0;
}


