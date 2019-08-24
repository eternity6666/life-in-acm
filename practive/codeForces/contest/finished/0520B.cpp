#include <iostream>
#include <queue>
#include <cstring>
#include <utility>
using namespace std;
const int maxn = 20010;
const int inf = 0x3f3f3f3f;
typedef pair<int, int> P;

int n, m;
bool v[maxn];

int main()
{
    cin >> n >> m;
    memset(v, 1, sizeof(v));
    queue<P> q;
    q.push(P(n, 0));
    while(!q.empty())
    {
        P tmp = q.front(); q.pop();
        if(v[tmp.first])
        {
            // cout << tmp.first << " " << tmp.second << endl;
            if(tmp.first == m)
            {
                cout << tmp.second << endl;
                return 0;
            }
            v[tmp.first] = 0;
            if(tmp.first-1 > 0)
                q.push(P(tmp.first-1, tmp.second+1));
            if(tmp.first<m)
                q.push(P(tmp.first*2, tmp.second+1));
        }
    }
    return 0;
}