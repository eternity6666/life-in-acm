#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int n, m, t;
map<long long, bool> nma, mma;
vector<long long> nve, mve;
set<long long> nt, ns;
set<long long> mt, ms;

int deal()
{
    int ans = 0;
    set<long long>::iterator it;

    set<long long>::iterator itTmp = ms.begin();
    for(it = nt.begin(); it != nt.end(); it++)
    {
        bool flag = 0;
        set<long long>::iterator it2;
        for(it2 = itTmp; it2 != ms.end(); it2++)
        {
            if(mma[*it2] == false && *it < *it2)
            {
                flag = 1;
                mma[*it2] = true;
                nma[*it] = true;
                itTmp = it2;
                itTmp++;
                break;
            }
        }
        if(flag)
            ans++;
        if(itTmp == ms.end())
            break;
    }
    
    itTmp = mt.begin();
    for(it = ns.begin(); it != ns.end(); it++)
    {
        bool flag = 0;
        set<long long>::iterator it2;
        for(it2 = itTmp; it2 != mt.end(); it2++)
        {
            if(mma[*it2] == false && *it > *it2)
            {
                flag = 1;
                mma[*it2] = true;
                nma[*it] = true;
                itTmp = it2;
                itTmp++;
                break;
            }
        }
        if(flag)
            ans++;
        if(itTmp == ms.end())
            break;
    }

    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> t;
    // int y = pow(2, 31) - 1;
    // cout << y << endl;
    while(t--)
    {
        mma.clear();
        mve.clear();
        mt.clear();
        ms.clear();
        nma.clear();
        nve.clear();
        nt.clear();
        ns.clear();
        cin >> n >> m;
        fei(1, n)
        {
            long long tmp;
            cin >> tmp;
            nve.push_back(tmp);
            nma[tmp] = false;
        }
        fei(1, m)
        {
            long long tmp;
            cin >> tmp;
            mve.push_back(tmp);
            mma[tmp] = false;
        }

        fei(1, n)
        {
            int x;
            cin >> x;
            long long tmp = nve[i - 1];
            if(x == 1)
                nt.insert(tmp);
            else
                ns.insert(tmp);
        }
        fei(1, m)
        {
            int x;
            cin >> x;
            long long tmp = mve[i - 1];
            if(x == 1)
                mt.insert(tmp);
            else
                ms.insert(tmp);
        }

        cout << deal() << endl;
    }
    return 0;
}


