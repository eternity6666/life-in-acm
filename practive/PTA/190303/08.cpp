#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 500 + 5;

struct node
{
    map<string, int> ma;
    long long time;
};

struct node2
{
    vector<string> ve;
    long long time;
};

bool flag;
int n, m;
string st, ed;
map<string, node> ma;
node2 ans;

void findRoad();
bool deal(node2 a, string b);

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n;
    fei(1, n)
    {
        string tmp1;
        node tmp2;
        cin >> tmp1 >> tmp2.time;
        ma[tmp1] = tmp2;
    }

    cin >> m;
    fei(1, m)
    {
        string tmp1, tmp2;
        int tmp3;
        cin >> tmp1 >> tmp2 >> tmp3;
        ma[tmp1].ma[tmp2] = tmp3;
    }
    
    cin >> st >> ed;

    findRoad();

    if(flag)
    {
        cout << ans.time << endl;
        vector<string>::iterator it;
        for(it = ans.ve.begin(); it != ans.ve.end(); it++)
        {
            if(it == ans.ve.begin())
                cout << *it;
            else
                cout << "->" << *it;
        }
        cout << endl;
    }
    else
        cout << "Why not go home by plane?" << endl;
    return 0;
}

void findRoad()
{
    flag = 0;
    ans.ve.clear();
    ans.time = 0;
    
    /*
    st = "Xiamen";
    ed = "Datong";
    */

    queue<node2> qu;
    node2 tmp;
    tmp.ve.push_back(st);
    tmp.time = 0;
    qu.push(tmp);

    // freopen("out.txt", "w", stdout);
    while(!qu.empty())
    {
        // cout << 1 << endl;

        tmp = qu.front();
        qu.pop();

        /*
            cout << tmp.time << endl;
            vector<string>::iterator it;
            for(it = tmp.ve.begin(); it != tmp.ve.end(); it++)
            {
                if(it == tmp.ve.begin())
                    cout << *it;
                else
                    cout << "->" << *it;
            }
            cout << endl;
        */
        vector<string>::iterator it = tmp.ve.end() - 1;
        // it = tmp.ve.end() - 1;
        if(*it == ed)
        {
            // cout << 1 << endl;
            // tmp.time -= ma[ed].time;
            if(!flag)
            {
                ans = tmp;
                flag = 1;
            }
            else
            {
                if(ans.time > tmp.time)
                    ans = tmp;
                else if(ans.time == tmp.time)
                    if(ans.ve.size() > tmp.ve.size())
                        ans = tmp;
            }
        }
        else
        {
            // vector<string>::iterator it2;
            map<string, int>::iterator it2;
            // int len = ma[*it].ma.size();
            // fei(0, len - 1)
            // int i = 0;
            for(it2 = ma[*it].ma.begin(); it2 != ma[*it].ma.end(); it2++)
            {
                // i++;
                // cout << 2 << endl;
                node2 tmp2 = tmp;
                string tmp3 = (*it2).first;
                // string tmp3 = ma[*it].ma[i].first;
                // if(tmp.ve.find(tmp3) != tmp.ve.end())
                if(deal(tmp, tmp3))
                    continue;
                else
                {
                    tmp2.time += (*it2).second;
                    // cout << i << ": " << (*it2).second;
                    if(tmp3 != ed)
                    {
                        tmp2.time += ma[tmp3].time;
                        // cout << ", " << ma[*it].time;
                    }
                    // cout << endl;

                    tmp2.ve.push_back(tmp3);
                    qu.push(tmp2);
                    /*
                        if(*it != ed)
                            tmp2.time += ma[*it].time;
                        tmp2.ve.push_back(tmp3);
                        tmp2.time += (*it2).second;
                        qu.push(tmp2);
                    */

                    /*
                        tmp2.ve.push_back(tmp3);
                        if(tmp3 != ed)
                            tmp2.time += ma[*it].time;
                        // tmp2.time += ma[*it].ma[i].second;
                        tmp2.time += (*it2).second;
                        qu.push(tmp2);
                    */
                }
            }
        }
    }
}

bool deal(node2 a, string b)
{
    vector<string>::iterator it;
    for(it = a.ve.begin(); it != a.ve.end(); it++)
        if(*it == b)
            return true;
    return false;
}
