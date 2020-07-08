#include <iostream>
using namespace std;
const int maxn = 100 + 5;
int g[maxn][maxn];
int main()
{
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= n; ++j)
            g[i][j] = 1;
    while (m--)
    {
        int a, b;
        cin >> a >> b;
        g[a][b] = 0;
    }
    int ma = 0;
    
    cout << ma << endl;
    return 0;
}
