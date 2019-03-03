#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int m, n;
int g[maxn][maxn];
int ans1, ans2;
int dx[] = {0, 1};
int dy[] = {1, 0};

struct node
{
    int x, y;
    int sum;
};

void deal();

int main()
{
    freopen("in.txt", "r", stdin);
    cin >> m >> n;
    fei(1, m)
    {
        fej(1, n)
        {
            cin >> g[i][j];
        }
    }
    /*
    fei(1, m)
    {
        fej(1, n)
        {
            cout << g[i][j];
        }
        cout << endl;
    }
    */
    ans1 = ans2 = 0;
    deal();
    cout << ans1 << " " << ans2 << endl;
    return 0;
}

void deal()
{
    queue<node> q;
    node tmp;
    tmp.x = 1;
    tmp.y = 1;
    tmp.sum = g[1][1];
    q.push(tmp);

    while(!q.empty())
    {
        tmp = q.front();
        q.pop();
        if(tmp.x == m && tmp.y == n)
        {
            if(tmp.sum > ans1)
            {
                ans1 = tmp.sum;
                ans2 = 1;
            }
            else if(tmp.sum == ans1)
                ans2++;
        }
        fei(0, 1)
        {
            node tmp2;
            tmp2.x = tmp.x + dx[i];
            tmp2.y = tmp.y + dy[i];
            if(tmp2.x <= m && tmp2.y <= n)
            {
                tmp2.sum = tmp.sum + g[tmp2.x][tmp2.y];
                q.push(tmp2);
            }
        }
    }

}

