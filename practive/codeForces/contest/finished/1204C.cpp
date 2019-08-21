#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
const int maxn = 110;
const int maxm = 1e6 + 10;
const int inf = 0x3f3f3f3f;

int g[maxn][maxn];
int a[maxm];

int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
        {
            char c;
            cin >> c;
            if (c == '0')
                g[i][j] = i == j ? 0 : inf;
            else
                g[i][j] = 1;
        }
    for (int k = 1; k <= n; k++)
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
    vector<int> ans;
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
        cin >> a[i];
    for (int i = 1, j, s; i <= m; i = j)
    {
        ans.push_back(a[i]);
        for (s = 0, j = i; j <= m; j++)
        {
            if (s + g[a[j]][a[j + 1]] != g[a[i]][a[j + 1]])
                break;
            s += g[a[j]][a[j + 1]];
        }
    }
    cout << ans.size() << endl;
    for (int x : ans)
        cout << x << " ";
    cout << endl;
    return 0;
}

/*
输入:
第一行一个整数n, 表示有向图的顶点个数
接下来的n行是有向图的邻接矩阵, 第i行第j列为表示顶点i可达顶点j
接下来一行一个整数m, 表示一条路径的顶点个数
接下来一行有m个点, 表示路径中的每一个点

输出:
能表示该路径的子序列有很多条, 输出最短的那条.(路径压缩)
*/