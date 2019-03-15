#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fni(a, b) for(int i = a; i < b; i++)
#define fnj(a, b) for(int j = a; j < b; j++)
using namespace std;

const int maxn = 100 + 5;

struct point{
    double x, y;
}rec[5];

double got_ans();
double abc(point a, point b, point c);
double got_length(point x);
// bool is_cross();

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%lf %lf", &rec[0].x, &rec[0].y))
    {
        fei(1, 3)
            scanf("%lf %lf", &rec[i].x, &rec[i].y);
        double ans = got_ans();
        printf("%.2lf\n", ans);
    }
    return 0;
}

double got_ans()
{
    return abc(rec[0], rec[1], rec[2]) * 2;
}

double got_length(point x)
{
    return sqrt(x.x * x.x + x.y * x.y);
}

double abc(point a, point b, point c)
{
    point x, y, z;
    x.x = b.x - a.x;
    x.y = b.y - a.y;
    double xLen = got_length(x);

    y.x = b.x - c.x;
    y.y = b.y - c.y;
    double yLen = got_length(y);
    
    z.x = a.x - c.x;
    z.y = a.y - c.y;
    double zLen = got_length(z);
    
    
    // double tmp = x.x * y.x + x.y * y.y;

    // double sin = sqrt(1 - tmp * tmp / xLen * xLen * yLen * yLen);

    // return sin * xLen * yLen;

    // return sqrt(xLen * xLen * yLen * yLen - tmp * tmp); 

    /*
    cout << " " << x.x << " " << y.y << " " << x.y << " " << y.x << " " << endl;
    return abs(x.x * y.y - x.y * y.x) / 2;
    */
    
    /*
    double tmp = xLen + yLen + zLen;
    tmp /= 2;
    return sqrt(tmp * (tmp - xLen) * (tmp - yLen) * (tmp - zLen));
    */

    /*
    return abs(a.x * b.y + a.y * c.x + b.x * c.y - a.x * c.y - b.y * c.x - a.y * b.x);
    */
}

