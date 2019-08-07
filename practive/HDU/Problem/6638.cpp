#include <iostream>
#include <cstring>
#include <set>
#include <vector>
#include <map>
using namespace std;
const int maxn = 2010;

struct node{int x, y, w;};
int n, x, y;
int maze[maxn][maxn];
int b[maxn];

int maxSum()
{
    int sum = 0, tmp = 0;
    for(int i = 1; i < y; ++i)
    {
        if(tmp > 0) tmp += b[i];
        else tmp = b[i];
        if(tmp > sum) sum = tmp;
    }
    return sum;
}

int maxSum2()
{
    int sum = 0;
    for(int i = 1; i < x; ++i)
    {
        for(int k = 1; k < y; ++k)
            b[k] = 0;
        for(int j = i; j < x; ++j)
        {
            for(int k = 1; k < y; ++k)
                b[k] += maze[j][k];
            int max = maxSum();
            if(max > sum)
                sum = max;
        }
    }
    return sum;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        set<int> xs, ys;
        vector<node> ve;
        map<int, int> xma, yma;
        memset(maze, 0, sizeof(maze));
        cin >> n;
        for(int i = 0; i < n; ++i)
        {
            node tmp; cin >> tmp.x >> tmp.y >> tmp.w;
            ve.push_back(tmp);
            xs.insert(tmp.x), ys.insert(tmp.y);
        }
        set<int>::iterator it;
        y = x = 1;
        for(it = xs.begin(); it != xs.end(); it++)
            xma[*it] = x++;
        for(it = ys.begin(); it != ys.end(); it++)
            yma[*it] = y++;
        for(int i = 0; i < n; ++i)
            maze[xma[ve[i].x]][yma[ve[i].y]] += ve[i].w;
        cout << maxSum2() << endl;
    }
    return 0;
}
