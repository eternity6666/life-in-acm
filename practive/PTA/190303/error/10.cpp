#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 30000 + 5;

vector<int> ve[maxn];
bool v[maxn];
set<int> s;

int main()
{
    freopen("in.txt", "r", stdin);

    int n, m;
    cin >> n >> m;

    fei(1, m)
    {
        v[i] = 0;
        int k;
        cin >> k;
        fej(1, k)
        {
            int tmp;
            cin >> tmp;
            ve[i].push_back(tmp);
            if(tmp == 0)
                v[i] = 1;
        }
        if(v[i])
        {
            vector<int>::iterator it;
            for(it = ve[i].begin(); it != ve[i].end(); it++)
                s.insert((*it));
        }
    }
    bool flag = 1;
    while(flag)
    {
        flag = 0;
        fei(1, m)
        {
            if(v[i] == 0)
            {
                vector<int>::iterator it;
                bool flagTmp = 0;
                for(it = ve[i].begin(); it != ve[i].end(); it++)
                {
                    if(s.find(*it) != s.end())
                    {
                        flagTmp = 1;
                        break;
                    }
                }
                if(flagTmp)
                {
                    v[i] = 1;
                    flag = 1;
                    for(it = ve[i].begin(); it != ve[i].end(); it++)
                        s.insert((*it));
                }
            }
        }
    }
    cout << s.size() << endl;
    return 0;
}


