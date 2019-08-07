#include <iostream>
using namespace std;
const int maxn = 105;

int n,m;
int maze[maxn][maxn];
int level[maxn];
int cost[maxn];

int main()
{
    ios_base::sync_with_stdio(0); cin.tie();
    cin >> n >> m;
    memset(maze, 0, sizeof(maze));
    memset(level, 0, sizeof(level));
    memset(cost, 0, sizeof(cost));
    for(int i = 1; i <= n; i++)
    {
        int x;
        cin >> cost[maxn] >> level[i] >> x;
        for(int j = 0; j < x; j++)
        {
            
        }
    }
    return 0;
}
