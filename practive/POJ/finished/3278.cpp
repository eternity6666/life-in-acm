#include <iostream>
#include <cstring>
#include <queue>
using namespace std;
const int maxn = 1e5 + 10;

struct node{int now, time;};
int n, k;
bool v[maxn];

int bfs()
{
    memset(v, 1, sizeof(v));

    node s;
    s.now = n;
    s.time = 0;
    queue<node> q;
    q.push(s);
    int ans = maxn;
    while(!q.empty())
    {
        s = q.front();
        if(s.now == k)
        {
            ans = s.time;
            break;
        }
        q.pop();
        v[s.now] = 0;


        node tmp;
        tmp.time = s.time + 1;
        tmp.now = s.now + 1;
        if(tmp.now < maxn && v[tmp.now])
            q.push(tmp);
        tmp.now = s.now - 1;
        if(tmp.now >= 0 && v[tmp.now])
            q.push(tmp);
        tmp.now = s.now * 2;
        if(tmp.now < maxn && tmp.now >= 0 && v[tmp.now])
            q.push(tmp);
    }
    return ans;
}

int main()
{
    freopen("in.txt", "r", stdin);
    ios_base::sync_with_stdio(0);
    cin >> n >> k;
    cout << bfs() << endl;
    return 0;
}

