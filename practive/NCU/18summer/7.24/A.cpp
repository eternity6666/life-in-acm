#include <iostream>
#include <queue>
#include <fstream>
#define usefre
using namespace std;
struct infected
{
    int x;
    int y;
    int num;
};
const int N = 2005;
const int M = 2005;
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
void findAns(queue<struct infected> q, int n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, m;
    while (cin >> n >> m)
    {
        queue<struct infected> q;
        int k;
        cin >> k;
        int flag = 0;
        bool a[N][M] = {0};
        while (k--)
        {
            int x, y;
            cin >> x >> y;
            struct infected tmp = {x, y, 0};
            a[x][y] = 1;
            q.push(tmp);
            flag++;
        }
        int num;
        while (q.size() && flag < n * m)
        {
            for (int i = 0; i < 4; i++)
            {
                if (q.front().x + dx[i] <= n && q.front().x + dx[i] >= 1 && q.front().y + dy[i] <= m && q.front().y + dy[i] >= 1 && a[q.front().x + dx[i]][q.front().y + dy[i]] == 0)
                {
                    a[q.front().x + dx[i]][q.front().y + dy[i]] = 1;
                    struct infected tmp = {q.front().x + dx[i], q.front().y + dy[i], q.front().num + 1};
                    num = tmp.num;
                    q.push(tmp);
                    flag++;
                }
            }
            q.pop();
        }
        findAns(q, num);
    }
    return 0;
}

void findAns(queue<struct infected> q, int num)
{
    //谁最小输出谁
    struct infected ans = {N, M, N * M};
    while (q.size())
    {
        if (q.front().num < ans.num)
        {
            ans = q.front();
        }
        else
        {
            if (q.front().x < ans.x)
            {
                ans = q.front();
            }
            else if (q.front().x == ans.x && q.front().y < ans.y)
            {
                ans = q.front();
            }
        }
        q.pop();
    }
    cout << ans.x << " " << ans.y << endl;
    while (q.size())
    {
        cout << q.front().x << " " << q.front().y << endl;
        q.pop();
    }
}