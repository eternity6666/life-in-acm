/*
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;
const int maxn = 30;
const int inf = 0x3f3f3f3f;

int g[maxn][maxn];

int main()
{
    int n, l; 
    while(cin >> n >> l)
    {
        for(int i = 1; i <= 26; ++i)
            for(int j = 1; j <= 26; ++j)
                g[i][j] = inf;
        string s;
        for(int i = 1; i <= n; ++i)
        {
            cin >> s;
            int len = s.length();
            int x = s[0] - 'a';
            int y = s[len - 1] - 'a';
            g[x][y] = min(g[x][y], len - 1);
        }
        for(int k = 1; k <= 26; ++k)
            for(int i = 1; i <= 26; ++i)
                for(int j = 1; j <= 26; ++j)
                    g[i][j] = min(g[i][j], g[i][k] + g[k][j]);
        
    }
    return 0;
}
*/

