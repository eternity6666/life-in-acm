#include <iostream>
#include <utility>
#include <queue>
using namespace std;
typedef pair<int, int> P;

int main()
{
    string a, b;
    cin >> a >> b;
    int x = 0;;
    int len = a.length();
    for (int i = 0; i < len; i++)
        if (a[i] == '-')
            x--;
        else
            x++;
    double fm = 0, fz = 0;
    queue<P> q;
    if (b[0] == '-')
        q.push(P(-1, 0));
    else if (b[0] == '+')
        q.push(P(1, 0));
    else
    {
        q.push(P(1, 0));
        q.push(P(-1, 0));
    }
    while (!q.empty())
    {
        P tmp = q.front();
        q.pop();
        if (tmp.second == len - 1)
        {
            fm++;
            if (tmp.first == x)
                fz++;
            continue;
        }
        if (b[tmp.second + 1] == '-')
            q.push(P(tmp.first - 1, tmp.second + 1));
        else if (b[tmp.second + 1] == '+')
            q.push(P(tmp.first + 1, tmp.second + 1));
        else
        {
            q.push(P(tmp.first + 1, tmp.second + 1));
            q.push(P(tmp.first - 1, tmp.second + 1));
        }
    }
    printf("%.12lf\n", fz / fm);
    return 0;
}
