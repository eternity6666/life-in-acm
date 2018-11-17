#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int u, v;
    double d;
}s[10000 + 5];

int x[maxn], y[maxn], pre[maxn];

void init(int n);
int findX(int x);
double distance(int x, int y, int a, int b);
bool cmp(const node& a, const node& b);
bool merge(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);
    int T;
    cin >> T;
    while(T--)
    {
        int c;
        cin >> c;
        for(int i = 0; i < c; i++)
        {
            cin >> x[i] >> y[i];
        }

        int k = 0;
        for(int i = 0; i < c; i++)
        {
            for(int j = i + 1; j < c; j++)
            {
                double d = distance(x[i], y[i], x[j], y[j]);
                if(d >= 10 && d <= 1000)
                {
                    s[k].u = i;
                    s[k].v = j;
                    s[k].d = d;
                    k++;
                }
            }
        }

        sort(s, s + k, cmp);

        init(c);
        
        int flag = 0;
        double sum = 0;
        for(int i = 0; i < k; i++)
        {
            if(merge(s[i].u, s[i].v))
            {
                flag++;
                sum = sum + s[i].d;
            }
        }

        if(flag == c - 1)
            printf("%.1lf\n", sum * 100);
        else
            printf("oh!\n");
    }
    return 0;
}


void init(int n)
{
    for(int i = 0; i < n; i++)
    {
        pre[i] = i;
    }
}

int findX(int x)
{
    if(pre[x] == x)
        return x;
    else
        return pre[x] = findX(pre[x]);
}

double distance(int x, int y, int a, int b)
{
    return sqrt((x - a) * (x - a) + (y - b) * (y - b));
}

bool cmp(const node& a, const node& b)
{
    return a.d < b.d;
}

bool merge(int x, int y)
{
    x = findX(x);
    y = findX(y);
    if(x != y)
    {
        pre[x] = y;
        return true;
    }
    else
        return false;
}

/*
#include <bits/stdc++.h>
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int u;
    int v;
    double d;
}islands[maxn * maxn];

int x[maxn], y[maxn], pre[maxn];

void init(int n);
int findX(int x);
bool merge(int x, int y);
bool cmp(const node &a, const node &b);

int main()
{
    freopen("in.txt", "r", stdin);
    int T;
    cin >> T;
    while(T--)
    {
        int C;
        cin >> C;
        for(int i = 0; i < C; i++)
            cin >> x[i] >> y[i];
        int k = 0;
        for(int i = 0; i < C; i++)
        {
            for(int j = i + 1; j <= C; j++)
            {
                double d = sqrt((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
                if(d >= 10 && d <= 1000)
                {
                    islands[k].u = i;
                    islands[k].v = j;
                    islands[k].d = d;
                    k++;
                }
            }
        }

        sort(islands, islands + k, cmp);

        init(C);
        
        int flag = 0;
        double sum = 0;
        for(int i = 0; i < k; i++)
        {
            if(merge(islands[i].u, islands[i].v))
            {
                sum += islands[i].d;
                flag++;
            }
        }
        
        if(flag == C - 1)
            printf("%.1lf\n", sum * 100);
        else
            printf("oh!\n");
    }
    return 0;
}

bool cmp(const node &a, const node &b)
{
    return a.d < b.d;
}

void init(int n)
{
    for(int i = 0; i < n; i++)
    {
        pre[i] = i;
    }
}

int findX(int x)
{
    return pre[x] == x ? x : pre[x] = findX(pre[x]);
}

bool merge(int x, int y)
{
    x = findX(x);
    y = findX(y);
    if(x != y)
    {
        pre[x] = y;
        return true;
    }
    return false;
}
*/
