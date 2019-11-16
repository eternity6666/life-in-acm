#include <iostream>
#include <cmath>
#include <stack>
#include <map>
using namespace std;
const int maxn = 600 + 5;
const double inf = 0x3f3f3f3f;
struct node
{
    double x, y, z;
};
int n;
double m;

map<int, node> ma;
double g[maxn][maxn], dis[maxn];
bool v[maxn];
int pre[maxn];

double get(node a, node b)
{
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2) + pow(a.z - b.z, 2));
}

void dijkstra()
{
    for (int i = 0; i <= n + 1; ++i)
    {
        v[i] = 0;
        dis[i] = (g[0][i] <= m ? g[0][i] : inf);
        pre[i] = (g[0][i] <= m ? 0 : -1);
    }
    v[0] = 1;
    for (int i = 0; i <= n + 1; ++i)
    {
        int k = -1;
        double mi = inf;
        for (int j = 0; j <= n + 1; ++j)
            if (v[j] == 0 && mi > dis[j])
                mi = dis[j], k = j;
        if (k == -1)
            break;
        v[k] = 1;
        for (int j = 0; j <= n + 1; ++j)
            if (v[j] == 0 && g[k][j] <= m && g[k][j] + dis[k] < dis[j])
            {
                dis[j] = g[k][j] + dis[k], pre[j] = k;
                // cout << k << " " << dis[j] << endl;
            }
    }
    // for (int i = 0; i <= n + 1; ++i)
    //     for (int j = 0; j <= n + 1; ++j)
    //         printf("%.3lf%s", g[i][j], (j == n + 1 ? "\n" : " "));
    // cout << endl;
    // for (int i = 0; i <= n + 1; ++i)
    //     printf("%.3lf%s", dis[i], (i == n + 1 ? "\n" : " "));
    // for (int i = 0; i <= n + 1; ++i)
    //     cout << pre[i] << (i == n + 1 ? "\n" : " ");
}

int main()
{
    cin >> n >> m;
    cin >> ma[0].x >> ma[0].y >> ma[0].z;
    cin >> ma[n + 1].x >> ma[n + 1].y >> ma[n + 1].z;
    for (int i = 1; i <= n; ++i)
        cin >> ma[i].x >> ma[i].y >> ma[i].z;
    for (int i = 0; i <= n + 1; ++i)
        for (int j = i; j <= n + 1; ++j)
            g[j][i] = g[i][j] = (i == j ? 0 : get(ma[i], ma[j]));
    dijkstra();
    stack<int> st;
    printf("%.3lf\nStart ", dis[n + 1]);
    for (int k = pre[n + 1]; k != 0; k = pre[k])
        st.push(k);
    while (!st.empty())
    {
        int k = st.top();
        st.pop();
        cout << k << " ";
    }
    cout << "End" << endl;
    return 0;
}