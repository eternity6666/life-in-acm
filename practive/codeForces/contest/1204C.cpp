#include <iostream>
using namespace std;
const int maxn = 110;

int n, m;
bool g[maxn][maxn];
int a[maxn][maxn];

int main()
{
    cin >> n;
    for(int i=1; i<=n; i++)
        for(int j = 1; j<=n; j++)
            cin >> g[i][j];
    
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