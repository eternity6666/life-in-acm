#include <iostream>
using namespace std;

int n, m, s;
double v;
double map[105] = {0}, g1[105][105] = {0}, g2[105][105] ={0}; 

bool floyd()
{
    int i, j, k;
    double d[105];
    for(i = 1; i <= n; i++) d[i] = map[i];
    for(k = 1; k <= n; k++)
        for(i = 1; i <= n; i++)
            for(j = 1; j <= n; j++)
                map[j] = max(map[j], (map[i]-g2[i][j])*g1[i][j]);
    for(i = 1; i <= n; i++)
        if(d[i] < map[i])
            return 1;
    return 0;
}

int main()
{
    cin >> n >> m >> s >> v;
    int i, j, k;
    for (i = 1; i <= m; i++)
    {
        int a, b;
        double c, d, e, f;
        cin >> a >> b >> c >> d >> e >> f;
        g1[a][b] = c, g2[a][b] = d;
        g1[b][a] = e, g2[b][a] = f;
    }
    map[s] = v;
    floyd();
    cout << (floyd() ? "YES" : "NO") << endl;
    return 0;
}
