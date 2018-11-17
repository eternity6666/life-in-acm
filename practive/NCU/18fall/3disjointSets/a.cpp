#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <set>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 100;
struct node{
    int x, y;
}g[maxn];

int f[maxn];
bool o[maxn];

int n, d;
double length(int x, int y);
int findX(int x);
void merge(int x, int y);
// bool com(int x, int y);
void add(int a);

int main()
{
    freopen("in.txt", "r", stdin);
    scanf("%d %d", &n, &d);
    fei(1, n)
    {
        cin >> g[i].x >> g[i].y;
        f[i] = i;
        o[i] = 0;
    }
    char op;
    while(~scanf("%c", &op))
    {
        if(op == 'O')
        {
            int p;
            cin >> p;
            add(p);
        }
        else if(op == 'S')
        {
            int p, q;
            cin >> p >> q;
            if(findX(p) == findX(q))
                cout << "SUCCESS" << endl;
            else
                cout << "FAIL" << endl;
        }
    }
    return 0;
}

void add(int a)
{
    o[a] = 1;

    fei(1, n)
    {
        if(o[i] && i != a)
        {
            merge(i, a);
        }
    }
}

/*
bool com(int x, int y)
{
    x = findX(x);
    y = findX(y);
    if(x == y)
        return true;
    else
        return false;
}
*/

void merge(int x, int y)
{
    int a, b;
    a = findX(x);
    b = findX(y);

    if(a != b)
        if(length(x, y) <= d * d)
            f[b] = a;
}

int findX(int x)
{
    return x == f[x] ? x : f[x] = findX(f[x]);
}

double length(int x, int y)
{
    return (g[x].x - g[y].x) * (g[x].x - g[y].x) + (g[x].y - g[y].y) * (g[x].y - g[y].y);
}

/*
#include <iostream>
#include <cmath>
#include <vector>
#include <cstdio>
#include <set>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 1000 + 5;
const int INF = -0x3fffffff;

struct node{
    int x, y, f;
}g[maxn * maxn];

bool o[maxn * maxn];
int n, d;
int findX(int x);
void add(int x);
bool com(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);

    cin >> n >> d;

    fei(1, n)
    {
        int x, y;
        cin >> g[i].x >> g[i].y;
        g[i].f = i;
        o[i] = 0;
    }

    char op;
    while(~scanf("%c", &op))
    {
        if(op == 'O')
        {
            int a;
            cin >> a;
            add(a);
        }
        else if(op == 'S')
        {
            int a, b;
            cin >> a >> b;
            if(com(a, b))
                cout << "SUCCESS" << endl;
            else
                cout << "FAIL" << endl;
        }
    }
    return 0;
}

int findX(int x)
{
    return x == g[x].f ? x : g[x].f = findX(g[x].f);
}

double length(int x, int y)
{
    return sqrt(pow((g[x].x - g[y].x), 2) + pow((g[x].y - g[y].y), 2));
}

void merge(int x, int y)
{
    x = findX(x);
    y = findX(y);

    if(x != y)
    {
        if(x < y)
            g[y].f = x;
        else
            g[x].f = y;
    }
}

bool com(int x, int y)
{
    if(!o[x] || !o[y])
        return false;
    if(g[x].f == g[y].f)
        return true;
    else
        return false;
}

void add(int x)
{
    o[x] = 1;

    fei(0, n)
    {
        if(o[i] && length(i, x) <= d)
            merge(i, x);
    }
}
*/
