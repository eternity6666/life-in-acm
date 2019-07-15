#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e6 + 5;

queue<int> q;
set<int> s;

void output()
{
    int len = q.size();
    while(len--)
    {
        int tmp = q.front();
        q.pop();
        q.push(tmp);
        cout << tmp << " ";
    }
    cout << endl;
}

int main()
{
    freopen("in.txt", "r", stdin);
    int n, k, p;
    while(~scanf("%d %d %d", &n, &k, &p))
    {
        s.clear();

        fadd(i, 1, k)
            q.push(i);
        ll now = 0;
        while(!q.empty())
        {
            // output();
            now++;
            int tmp = q.front();
            q.pop();
            if(now % n == 0)
                s.insert(tmp);
            if(q.empty())
                break;
            fadd(i, 1, p)
            {
                // output();
                tmp = q.front();
                q.pop();
                q.push(tmp);
            }
        }
        set<int>::iterator it;
        for(it = s.begin(); it != s.end(); it++)
            cout << *it << endl;
    }
    return 0;
}


