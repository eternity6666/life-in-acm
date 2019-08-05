#include <iostream>
#include <cstring>
using namespace std;
const int maxn = 1e3 + 5;

int n, m;
int dis[maxn][maxn];

int floyd()
{
    for(int k = 1; k <= n; k++)
        for(int i = 1; i <= n; i++)
            for(int j = 1; j <= n; j++)
                if(dis[i][k] != 0 && dis[i][k] == dis[k][j])
                    dis[i][j] = dis[i][k];

    int ans = 0;
    for(int i = 1; i <= n; i++)
    {
        int tmp = 0;
        for(int j = 1; j <= n; j++)
            if(i == j)
                continue;
            else if(dis[i][j] != 0)
                tmp++;
            else
                break;
        if(tmp == n - 1)
            ans++;
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie();
    cin >> n >> m;
    memset(dis, 0, sizeof(dis));
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;
        dis[a][b] = -1;
        dis[b][a] = 1;
    }
    // for(int i = 1; i <= n; i++)
    //     for(int j = 1; j <= n; j++)
    //         cout << (dis[i][j]?1:0) << (j==n?"\n":" ");
    cout << floyd() << endl;
    return 0;
}
