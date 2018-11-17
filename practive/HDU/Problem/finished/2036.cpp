#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;
struct node{
    int x, y;
}point[maxn];
double ans = 0;
int n;

// void deal();
// double got_area(node a, node b, node c);
double got_area();
int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d", &n) && n)
    {
        fei(0, n - 1)
            cin >> point[i].x >> point[i].y;
        ans = got_area();
        // deal();
        // cout << ans << endl;
        printf("%.1lf\n", ans);
    }
    return 0;
}


double got_area()
{
    double s1, s2;
    s1 = s2 = 0;
    fei(0, n - 1)
    {
        s1 += point[(i + 1) % n].y * point[i].x;
        s2 += point[(i + 1) % n].y * point[(i + 2) % n].x;
    }
    return fabs(s1 - s2) / 2;
}

/*
// 如果这是一个凸多边形
void deal()
{
    node a = point[1];
    fei(2, n - 1)
    {
        ans += got_area(point[i], a, point[i + 1]);
    }
}

double got_length(node a, node b)
{
    return sqrt((a.x - b.x) * 2 + (a.y - b.y) * 2);
}

double got_area(node a, node b, node c)
{
    double A = got_length(a, b);
    double B = got_length(a, c);
    double C = got_length(b, c);
    double p = (A + B + C) / 2;
    return sqrt(p * (p - A) * (p - B) * (p - C));
}
*/
