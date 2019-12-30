#include <bits/stdc++.h>
using namespace std;

bool v[10][10] = {0};
long long g[10][10];
long long find(int a, int b)
{
    if(a<1||b<1)
        return 0;
    if(v[a][b])
        return g[a][b];
    v[a][b] = 1;
    if(a==1&&b==1)
        return g[a][b] = 1;
    return g[a][b] = find(a-1, b)+find(a,b-1);
}
int main()
{
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            g[i][j] = 0;
    find(8,8);
    for (int i = 1; i <= 8; i++)
        for (int j = 1; j <= 8; j++)
            cout << g[i][j] << (j==8?"\n":" ");
    cout << g[8][8] << endl;
}