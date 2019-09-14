/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4;
const int mod = 1e9 + 7;
const int inf = 1e5 + 10;

int n, x, y, z;
vector<int> ve[maxn];
void folyd()
{
    for (int k = 0; k < n; ++k)
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (g[i][j] > g[i][k] + g[k][j])
                    g[i][j] = g[i][k] + g[k][j];
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    while (cin >> n)
    {
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                g[i][j] = (i == j ? 0 : inf);
        for (int i = 1; i < n; ++i)
        {
            int a, b, c;
            cin >> a >> b >> c;
            if (c < g[a][b])
                g[a][b] = g[b][a] = c;
        }
        folyd();
        x = y = z = 0;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                if (g[i][j] != inf)
                {
                    if (g[i][j] % 3 == 0)
                        x = (x + g[i][j]) % mod;
                    else if (g[i][j] % 3 == 1)
                        y = (y + g[i][j]) % mod;
                    else
                        z = (z + g[i][j]) % mod;
                }
        cout << x << " " << y << " " << z << endl;
    }
    return 0;
}
*/

/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 1e4 + 10;

int n, head[maxn], ip;
struct node
{
    int to, val, next;
} edge[2 * maxn];

void init()
{
    ip = 0;
    memset(head, -1, sizeof(head));
}

void addedge(int a, int b, int c)
{
    edge[ip].next = head[a];
    edge[ip].to = b;
    edge[ip].val = c;
    head[a] = ip++;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie();
    cout.tie();
    while (cin >> n)
    {
        init();
        for (int i = 1; i < n; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            addedge(a, b, c);
            addedge(b, a, c);
        }
        floyd();
    }
    return 0;
}
*/
