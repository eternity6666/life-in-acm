#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int f;
    double x, y;
}co[maxn];
int k, height[maxn];
struct coor{
    int x, y;
    double distance;
}po[maxn * maxn];

bool cmp (const coor &a, const coor &b);
void init(int n);
double getDistance(int x, int y);
int findX(int x);
bool merge(int x, int y);

int main()
{
    freopen("in.txt", "r", stdin);
    int n;
    while(~scanf("%d", &n))
    {
        init(n);
        fei(1, n)
            scanf("%lf %lf", &co[i].x, &co[i].y);
        fei(1, n)
        {
            fej(i, n)
            {
                po[k].x = i;
                po[k].y = j;
                po[k].distance = getDistance(i, j);
                k++;
            }
        }
        sort(po, po + k, cmp);
        double ans = 0;
        fni(0, k)
        {
            if(merge(po[i].x, po[i].y))
                ans += po[i].distance;
        }
        printf("%.2lf\n", ans);
    }
    //cout << ans << endl;
    return 0;
}

bool cmp (const coor &a, const coor &b)
{
    return a.distance < b.distance;
}

void init(int n)
{
    k = 0;
    fei(1, n)
    {
        co[i].f = i;
        height[i] = 1;
    }
}

double getDistance(int x, int y)
{
    return sqrt(pow(co[x].x - co[y].x, 2) + pow(co[x].y - co[y].y, 2));
}

int findX(int x)
{
    return x == co[x].f ? x : co[x].f = findX(co[x].f);
}

bool merge(int x, int y)
{
    x = findX(x);
    y = findX(y);
    if(x == y)
        return false;
    else
    {
        if(height[x] < height[y])
            co[x].f = y;
        else
        {
            co[y].f = x;
            if(height[x] == height[y])
                height[x]++;
        }
        return true;
    }
}

