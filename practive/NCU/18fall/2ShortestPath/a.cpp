#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;
const int inf = 0x3fffffff;

int g[maxn][maxn], n,m,x, d1[maxn], d2[maxn];
bool v1[maxn], v2[maxn];

void Dijkstra1(int s);
void Dijkstra2(int s);
bool input();

int main()
{
    freopen("in.txt", "r", stdin);

    while(input())
    {
        Dijkstra1(x);
        Dijkstra2(x);
        int ans = 0;
        fei(1, n)
            if(ans < d1[i] + d2[i])
                ans = d1[i] + d2[i];
        cout << ans << endl;
    }
    return 0;
}

void Dijkstra1(int s)
{
    d1[s] = 0;
    fei(1, n)
    {
        int u = -1, mi = inf;
        fej(1, n)
            if(!v1[j] && d1[j] < mi)
                u = j, mi = d1[j];
        if(u == -1) return ;
        v1[u] = 1;
        fej(1, n)
            if(!v1[j] && g[j][u] != inf && d1[j] > d1[u] + g[j][u])
                d1[j] = d1[u] + g[j][u];
    }
}

void Dijkstra2(int s)
{
    d2[s] = 0;
    fei(1, n)
    {
        int u = -1, mi = inf;
        fej(1, n)
            if(!v2[j] && d2[j] < mi)
                u = j, mi = d2[j];
        if(u == -1) return ;
        v2[u] = 1;
        fej(1, n)
            if(!v2[j] && g[u][j] != inf && d2[j] > g[u][j] + d2[u])
                d2[j] = g[u][j] + d2[u];
    }
}

bool input()
{
    if(~scanf("%d %d %d", &n, &m, &x))
    {
        fei(1, n)
        {
            v1[i] = v2[i] = 0;
            d1[i] = d2[i] = inf;
            fej(1, n)
                g[i][j] = inf;
        }
        fei(1, m)
        {
            int a, b, t;
            scanf("%d %d %d", &a, &b, &t);
            if(g[a][b] > t)
                g[a][b] = t;
        }
        return true;
    }
    return false;
}

// #include <bits/stdc++.h>
// #define fei(a, b) for (int i = a; i <= b; i++)
// #define fej(a, b) for (int j = a; j <= b; j++)
// #define fni(a, b) for (int i = a; i < b; i++)
// #define fnj(a, b) for (int j = a; j < b; j++)
// using namespace std;
// const int maxn = 1000 + 5;

// struct node
// {
//     int a, b, t;
// } farm[maxn];

// int code[maxn][maxn];
// int N, M, X, ans, time;

// bool input();
// int max(int a, int b);
// int got_ans(int a, int b);
// void got_code();
// int min(int a, int b);

// int main()
// {
//     freopen("in.txt", "r", stdin);
//     while (input())
//     {
//         fei(1, N)
//             ans = max(ans, got_ans(1, X));
//         cout << ans << endl;
//     }
//     return 0;
// }

// void got_code()
// {
//     /*
//     fei(1, N)
//         fej(1, N)
//         {
//             time = 0;
//             dfs(i, j);
//             code[i][j] = min(code[i][j], time);
//         }
//     */
// }

// bool input()
// {
//     if (~scanf("%d %d %d", &N, &M, &S))
//     {
//         ans = 0;
//         fei(1, N)
//             fej(1, N)
//                 code[i][j] = maxn;
//         fei(1, M)
//         {
//             cin >> farm[i].a >> farm[i].b >> farm[i].t;
//             code[farm[i].a][farm[i].b] = farm[i].t;
//         }
//         got_code();
//         return true;
//     }
//     return false;
// }

// int min(int a, int b)
// {
//     return a < b ? a : b;
// }

// int got_ans(int a, int b)
// {
//     return code[a][b] + code[b][a];
// }

// int max(int a, int b)
// {
//     return a > b ? a : b;
// }
