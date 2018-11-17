#include <bits/stdc++.h>
#define fei(a, b) for (int i = a; i <= b; i++)
#define fek(a, b) for (int k = a; k <= b; k++)
#define fej(a, b) for (int j = a; j <= b; j++)
#define fni(a, b) for (int i = a; i < b; i++)
#define fnj(a, b) for (int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

int s, n, m;
bool v[maxn][maxn][maxn];

struct node
{
    int s, n, m, time;
};

void init();
int bfs();

int main()
{
    freopen("in.txt", "r", stdin);
    while (~scanf("%d %d %d", &s, &n, &m) && s + n + m)
    {
        int ans;
        ans = bfs();
        if (ans < 0)
            cout << "NO" << endl;
        else
            cout << ans << endl;
    }
    return 0;
}

int bfs()
{
    if (s % 2 == 1)
        return -1;

    queue<node> q;
    q.back();

    init();

    int s2 = s / 2;

    node f;
    f.s = s;
    f.n = 0;
    f.m = 0;
    f.time = 0;
    q.push(f);

    v[f.s][f.n][f.m] = 0;
    while (!q.empty())
    {
        f = q.front();
        q.pop();

        if ((f.s == f.n && f.s == s2) || (f.s == f.m && f.s == s2) || (f.m == f.n && f.m == s2))
            return f.time;

        node d;

        if (f.s)
        {
            if (f.n < n)
            {
                if (f.s > n - f.n)
                {
                    d.s = f.s - (n - f.n);
                    d.n = n;
                }
                else
                {
                    d.s = 0;
                    d.n = f.n + f.s;
                }
                d.m = f.m;
                if (v[d.s][d.n][d.m])
                {
                    v[d.s][d.n][d.m] = 0;
                    d.time = f.time + 1;
                    q.push(d);
                }
            }
            if (f.m < m)
            {
                if (f.s > m - f.m)
                {
                    d.s = f.s - (m - f.m);
                    d.m = m;
                }
                else
                {
                    d.s = 0;
                    d.m = f.m + f.s;
                }
                d.n = f.n;
                if (v[d.s][d.n][d.m])
                {
                    v[d.s][d.n][d.m] = 0;
                    d.time = f.time + 1;
                    q.push(d);
                }
            }
        }

        if (f.n)
        {
            if (f.s < s)
            {
                if (f.n > s - f.s)
                {
                    d.n = f.n - (s - f.s);
                    d.s = s;
                }
                else
                {
                    d.n = 0;
                    d.s = f.s + f.n;
                }
                d.m = f.m;
                if (v[d.s][d.n][d.m])
                {
                    v[d.s][d.n][d.m] = 0;
                    d.time = f.time + 1;
                    q.push(d);
                }
            }
            if (f.m < m)
            {
                if (f.n > m - f.m)
                {
                    d.n = f.n - (m - f.m);
                    d.m = m;
                }
                else
                {
                    d.n = 0;
                    d.m = f.m + f.n;
                }
                d.s = f.s;
                if (v[d.s][d.n][d.m])
                {
                    v[d.s][d.n][d.m] = 0;
                    d.time = f.time + 1;
                    q.push(d);
                }
            }
        }

        if (f.m)
        {
            if (f.s < s)
            {
                if (f.m > s - f.s)
                {
                    d.m = f.m - (s - f.s);
                    d.s = s;
                }
                else
                {
                    d.m = 0;
                    d.s = f.s + f.m;
                }
                d.n = f.n;
                if (v[d.s][d.n][d.m])
                {
                    v[d.s][d.n][d.m] = 0;
                    d.time = f.time + 1;
                    q.push(d);
                }
            }
            if (f.n < n)
            {
                if (f.m > n - f.n)
                {
                    d.m = f.m - (n - f.n);
                    d.n = n;
                }
                else
                {
                    d.m = 0;
                    d.n = f.n + f.m;
                }
                d.s = f.s;
                if (v[d.s][d.n][d.m])
                {
                    v[d.s][d.n][d.m] = 0;
                    d.time = f.time + 1;
                    q.push(d);
                }
            }
        }
    }
    return -1;
}
void init()
{
    fei(0, s)
        fej(0, n)
            fek(0, m)
                v[i][j][k] = 1;
}
