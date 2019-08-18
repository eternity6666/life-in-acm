/*
#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <cstring>
#include <utility>
using namespace std;
typedef pair<int, int> P;
const int maxn = 55;

int g[maxn][maxn];

bool cmp(P a, P b)
{
    return a.second != b.second ? a.second > b.second : a.first < b.first;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >> m;
        memset(g, 0, sizeof(g));
        while(n--)
        {
            string tmpa, tmpb; cin >> tmpa >> tmpb;
            string a = " " + tmpa;
            string b = " " + tmpb;
            for(int i = 1; i <= m; i++)
                for(int j = 1; j <= m; ++j)
                    if(a[i] == b[j])
                        g[i][j]++;
        }
        vector<P> ve;
        for(int i = 1; i <= m; ++i)
        {
            int maxa = 1;
            for(int j = 1; j <= m; ++j)
            {
                cout << g[i][j] << (j == m?"\n":" ");
                if(maxa < g[i][j])
                    maxa = g[i][j];
            }
            ve.push_back(P(i, maxa));
        }
        sort(ve.begin(), ve.end(), cmp);
        vector<P>::iterator it;
        int ans[maxn];
        memset(ans, 0, sizeof(ans));
        for(it = ve.begin(); it != ve.end(); it++)
        {
            P tmp = *it;
            int i = tmp.first, maxa = tmp.second;
            cout << i << " " << maxa << endl;
            for(int j = 1; j <= m; j++)
                if(g[i][j] == maxa)
                    if(ans[j] == 0)
                    {
                        ans[i] = j;
                        break;
                    }
        }
        bool flag = false;
        for(int i = 1; i <= m; i++)
            if(ans[i] == 0)
            {
                flag = true;
                break;
            }
        if(flag)
            cout << -1 << endl;
        else
            for(int i = 1; i <= m; i++)
                cout << ans[i] << (i == m?"\n" : " ");
    }
    return 0;
}
*/
/*
#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 60;

int g[maxn][maxn];
bool v[maxn];
int ans[maxn];

int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int n, m; scanf("%d%d", &n, &m);
        memset(g, 0, sizeof(g));
        memset(v, 1, sizeof(v));
        while(n--)
        {
            string tmpa, tmpb; cin >> tmpa >> tmpb;
            string a = " " + tmpa;
            string b = " " + tmpb;
            for(int i = 1; i <= m; ++i)
                for(int j = 1; j <= m; ++j)
                    if(a[i] == b[j])
                        g[i][j]++;
        }
        for(int i = 1; i <= m; ++i)
        {
            int maxa = 1;
            int q[maxn];
            int len = 0;
            for(int j = 1; j <= m; ++j)
            {
                cout << g[i][j] << (j == m?"\n":" ");
                if(maxa < g[i][j])
                {
                    len = 0;
                    q[len++] = j;
                    maxa = g[i][j];
                }
                else if(g[i][j] == maxa) q[len++] = j;
            }
            for(int k = 0; k < len; k++)
            {
                if(v[q[k]])
                {
                    v[ans[i] = q[k]] = false;
                    break;
                }
            }
        }
        bool flag = false;
        for(int i = 1; i <= m; i++)
            if(v[i])
            {
                flag = true;
                break;
            }
        if(flag)
            cout << -1 << endl;
        else
            for(int i = 1; i <= m; i++)
                cout << ans[i] << (i == m?"\n":" ");
    }
    return 0;
}
*/