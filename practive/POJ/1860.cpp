#include <iostream>
#include <algorithm>
using namespace std;
const int maxn = 210;
const double inf = 0x3f3f3f3f;

strcut edge{
    int a, b;
    double hl, yj;
}ed[maxn];
int head[maxn];
int n, m, s, num = 0;

bool cmp(edge &a, edge &b)
void init();

int main()
{
    
    cout << (bellmanFord() ? "YES" : "NO") << endl;
    return 0;
}

bool cmp(edge &a, edge &b)
{
    if(a.a != b.a) return a.a < b.a;
    if(a.b != b.b) return a.b < b.b;
    return a.hl != b.hl ? a.hl < b.hl : a.yj < b.yj;
}

void init()
{
    cin >> n >> m >> s >> v;
    num = 0;
    for(int i = 0; i < m; i++)
    {
        int a, b;
        cin >> ed[num].a >> ed[num].b >> ed[num].hl >> ed[num].yj;
        ed[++num].a = ed[num - 1].b, ed[num].b = ed[num - 1].a;
        cin >> ed[num].hl >> ed[num].yj;
    }
    sort(ed, ed + num, cmp);
    memset(head, -1, sizeof(head));
    head[ed[0].a] = 0;
    for(i = 1; i < m; i++)
        if(ed[i].a] != ed[i - 1].a) head[edge[i].a] = i;
}

