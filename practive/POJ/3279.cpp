#include <iostream>
using namespace std;
const int maxn = 20;

int g[maxn][maxn];
int filp[maxn][maxn];

int main()
{
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    int n, m;
    while(cin >> n >> m)
    {
        for(int i = 1; i <= n; ++i)
            for(int j = 1; j <= n; ++j)
                cin >> g[i][j];
        int ans = -1;
        for(int i = 0; i < 1<<m; ++i)
        {
            memset(flip, 0, sizeof(flip));
            for(j = 0; j < m; j++)
                flip[0][m - j - 1] = i>>j&1;
        }
    }

    return 0;
}

