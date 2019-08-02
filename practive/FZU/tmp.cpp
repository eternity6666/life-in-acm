#include<iostream>
#include<sstream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<numeric>
#include<cmath>
#include<queue>
#include<vector>
#include<set>
#include<cctype>
#define PI acos(-1.0)
const int INF = 0x3f3f3f3f;
const int NINF = -INF - 1;
typedef long long ll;
using namespace std;
int n, m;
int num;
char maze[12][12];
typedef pair<int, int> P;
P rec[105];//rec用于存储’#‘的数量及坐标位置
int d[12][12], used[12][12];
int dx[4] = {-1, 0, 1, 0}, dy[4] = {0, 1, 0, -1};
int bfs(P x, P y)
{
    queue<P> q;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
            d[i][j] = INF;
    }
    memset(used, 0, sizeof(used));
    q.push(x), q.push(y);
    d[x.first][x.second] = 0, d[y.first][y.second] = 0;
    used[x.first][x.second] = 1, used[y.first][y.second] = 1;
    P temp;//用于存储队列front的pair定义在这是为了在队列被取尽后，循环外能得到最后一次循环的d值
    //cout << x.first << ',' << x.second << ' ' << y.first << ',' << y.second << endl;
    while (q.size())
    {
        temp = q.front();
        //cout << temp.first << ' ' << temp.second << endl;
        q.pop();
        for (int i = 0; i < 4; ++i)
        {
            int nx = temp.first + dx[i], ny = temp.second + dy[i];
            if (nx >= 0 && nx < n && ny >= 0 && ny < m && !used[nx][ny] && maze[nx][ny] != '.')
            {
                used[nx][ny] = 1;
                q.push(P(nx, ny));
                d[nx][ny] = d[temp.first][temp.second] + 1;
            }
        }
    }
    //cout << d[x.first][x.second] << ' ' << d[y.first][y.second] << endl;
    for (int i = 0; i < num; ++i)
    {
        if (d[rec[i].first][rec[i].second] == INF)//仍存在未烧到的’#‘
            return INF;
    }
    return d[temp.first][temp.second];
}
int main()
{
    int T, t = 0;
    cin >> T;
    while (T--)
    {
        t++;
        int ans = INF;
        cin >> n >> m;
        num = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                cin >> maze[i][j];
                if (maze[i][j] == '#')
                    rec[num].first = i, rec[num++].second = j;
            }
        }
        if (num <= 1)//特判
        {
            cout << "Case " << t << ": " << 0 << endl;
            continue;
        }
        for (int i = 0; i < num; ++i)
        {
            for (int j = i + 1; j < num; ++j)
                ans = min(ans, bfs(rec[i], rec[j]));
        }
        if (ans != INF)
            cout << "Case " << t << ": " << ans << endl;
        else
            cout << "Case " << t << ": " << -1 << endl;
    }
    return 0;
}
