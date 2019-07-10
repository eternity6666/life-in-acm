#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;
const int maxn = 1e6 + 5;

int n, m;
int mm[25][1005];
int dx[] = {0, 1};
int dy[] = {1, 0};

struct node
{
    int x, y, v;
};

int bfs()
{
    int ans = 0;

    node s;
    s.x = s.y = 1;
    s.v = mm[1][1];
    queue<node> q;
    q.push(s);
    while(!q.empty())
    {
        s = q.front();
        q.pop();

        // cout << s.x << " " << s.y << " " << s.v << endl;
        if(s.x == n && s.y == m)
        {
            ans = max(ans, s.v);
        }
        else
        {
            fadd(i, 0, 1)
            {
                node tmp;
                tmp.x = s.x + dx[i];
                tmp.y = s.y + dy[i];
                if(tmp.x <= n && tmp.y <= m)
                {
                    tmp.v = s.v + mm[tmp.x][tmp.y];
                    q.push(tmp);
                }
            }
        }
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int c;
    cin >> c;
    while(c--)
    {
        cin >> n >> m;
        fadd(i, 1, n)
            fadd(j, 1, m)
                cin >> mm[i][j];
        cout << bfs() << endl;
    }
    return 0;
}


