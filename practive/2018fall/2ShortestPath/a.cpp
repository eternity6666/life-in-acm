#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 1000 + 5;

struct node{
    int a, b, t;
}farm[maxn];

int code[maxn][maxn];
int N, M, X, ans, time;

bool input();
int max(int a, int b);
int got_ans(int a, int b);
void got_code();
int min(int a, int b);

int main()
{
    freopen("in.txt", "r", stdin);
    while(input())
    {
        fei(1, N)
            ans = max(ans, got_ans(1, X));
        cout << ans << endl;
    }
    return 0;
}


void got_code()
{
    /*
    fei(1, N)
        fej(1, N)
        {
            time = 0;
            dfs(i, j);
            code[i][j] = min(code[i][j], time);
        }
    */
}

bool input()
{
    if(~scanf("%d %d %d", &N, &M, &S))
    {
        ans = 0;
        fei(1, N)
            fej(1, N)
                code[i][j] = maxn;
        fei(1, M)
        {
            cin >> farm[i].a >> farm[i].b >> farm[i].t;
            code[farm[i].a][farm[i].b] = farm[i].t;
        }
        got_code();
        return true;
    }
    return false;
}

int min(int a, int b)
{
    return a < b ? a : b;
}

int got_ans(int a, int b)
{
    return code[a][b] + code[b][a];
}

int max(int a, int b)
{
    return a > b ? a : b;
}

