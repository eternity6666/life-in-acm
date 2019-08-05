#include <iostream>
#include <cstring>
#include <map>
using namespace std;
const int maxn = 35;

int n, m;
map<string, int> ma;
double g[maxn][maxn];

void floyd()
{
    for(int k = 1; k <= n; ++k)
        for(int i = 1; i <= n; ++i)
            for(int j = 1;j <= n; ++j)
                if(g[i][j] < g[i][k] * g[k][j])
                    g[i][j] = g[i][k] * g[k][j];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie();
    int to = 0;
    while(cin >> n && n)
    {
        ma.clear();
        memset(g, 0, sizeof(g));
        for(int i = 1; i <= n; i++)
        {
            string s;
            cin >> s;
            ma[s] = i;
            g[i][i] = 1;
        }
        cin >> m;
        for(int i = 1; i <= m; i++)
        {
            string a, b;
            double d;
            cin >> a >> d >> b;
            g[ma[a]][ma[b]] = d;
        }
        floyd();
        cout << "Case " << ++to << ": ";
        bool flag = 0;
        for(int i = 1; i <= n; i++)
            if(g[i][i] > 1)
            {
                flag = 1;
                break;
            }
        if(flag)
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}
