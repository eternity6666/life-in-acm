#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;

int n, m;
set<int> se[maxn];
int a, b;
map<int, double> ma;
bool va[maxn];
map<int, double> mb;
bool vb[maxn];

bool cmp(int &a, int &b)
{
    return abs(a) < abs(b);
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> n >> m;
    fei(1, m)
    {
        int k;
        cin >> k;
        fej(1, k)
        {
            int tmp;
            cin >> tmp;
            se[i].insert(tmp);
        }
    }
    cin >> a >> b;
    fei(1, m)
    {
        set<int> tmp1, tmp2;
        int len = se[i].size();
        set<int>::iterator it;
        int atmp, btmp;
        atmp = btmp = 0;
        for(it = se[i].begin(); it != se[i].end(); it++)
        {
            if(*it < 0)
            {
                tmp1.insert(*it);
                if(*it == a)
                    atmp = 1;
                if(*it == b)
                    btmp = 1;
            }
            else
            {
                tmp2.insert(*it);
                if(*it == a)
                    atmp = 2;
                if(*it == b)
                    btmp = 2;
            }
        }
        if(atmp == 1)
        {
            for(it = tmp2.begin(); it != tmp2.end(); it++)
            {
                if(va[abs(*it)])
                    ma[*it] = ma[*it] + 1.0 / len;
                else
                    ma[*it] = 1.0 / len;
                va[abs(*it)] = true;
            }
        }
        else if(atmp == 2)
        {
            for(it = tmp1.begin(); it != tmp1.end(); it++)
            {
                if(va[abs(*it)])
                    ma[*it] = ma[*it] + 1.0 / len;
                else
                    ma[*it] = 1.0 / len;
                va[abs(*it)] = true;
            }
        }
        if(btmp == 1)
        {
            for(it = tmp2.begin(); it != tmp2.end(); it++)
            {
                if(vb[abs(*it)])
                    mb[*it] = mb[*it] + 1.0 / len;
                else
                    mb[*it] = 1.0 / len;
                vb[abs(*it)] = true;
            }
        }
        else if(btmp == 2)
        {
            for(it = tmp1.begin(); it != tmp1.end(); it++)
            {
                if(vb[abs(*it)])
                    mb[*it] = mb[*it] + 1.0 / len;
                else
                    mb[*it] = 1.0 / len;
                vb[abs(*it)] = true;
            }
        }
    }
    map<int, double>::iterator mit;
    double aans = 0;
    vector<int> vea;
    bool aflag = true;
    for(mit = ma.begin(); mit != ma.end(); mit++)
    {
        if((*mit).second > aans)
        {
            vea.clear();
            aans = (*mit).second;
            vea.push_back((*mit).first);
            if((*mit).first == b)
                aflag = 1;
            else
                aflag = 0;
        }
        else if((*mit).second == aans)
        {
            vea.push_back((*mit).first);
            if((*mit).first == b)
                aflag = 1;
        }
        // cout << (*mit).first << " " << (*mit).second << endl;
    }
    // cout << endl;
    double bans = 0;
    vector<int> veb;
    bool bflag = true;
    for(mit = mb.begin(); mit != mb.end(); mit++)
    {
        if((*mit).second > bans)
        {
            veb.clear();
            bans = (*mit).second;
            veb.push_back((*mit).first);
            if((*mit).first == a)
                bflag = 1;
            else
                bflag = 0;
        }
        else if((*mit).second == bans)
        {
            veb.push_back((*mit).first);
            if((*mit).first == a)
                bflag = 1;
        }
        // cout << (*mit).first << " " << (*mit).second << endl;
    }
    // cout << aflag << endl;
    // cout << bflag << endl;
    if(aflag && bflag)
        cout << a << " " << b << endl;
    else
    {
        sort(vea.begin(), vea.end(), cmp);
        sort(veb.begin(), veb.end(), cmp);
        // cout << 1 << endl;
        vector<int>::iterator vit;
        for(vit = vea.begin(); vit != vea.end(); vit++)
        {
            cout << a << " " << (*vit) << endl;
        }
        // cout << 1 << endl;
        for(vit = veb.begin(); vit != veb.end(); vit++)
        {
            cout << b << " " << (*vit) << endl;
        }
    }
    return 0;
}


