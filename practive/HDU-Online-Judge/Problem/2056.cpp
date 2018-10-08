#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

struct point{
    double x, y;
}rec[4];

double got_ans();
bool is_cross();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%lf %lf", &rec[0].x, &rec[0].y))
    {
        fni(1, 4)
            scanf("%lf %lf", &rec[i].x, &rec[i].y);
        double ans = got_ans();
        printf(".2lf", ans);
    }
    return 0;
}

