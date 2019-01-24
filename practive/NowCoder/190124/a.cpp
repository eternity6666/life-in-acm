#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

struct node
{
    int x,y;
};

double get_len(node a, node b)
{
    return sqrt((a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}

double get_area(node a, node b, node c)
{
    double x, y, z;
    x = get_len(a, b);
    y = get_len(c, b);
    z = get_len(c, a);

    double aver = (x + y + z) / 2;
    return sqrt(aver * (aver - x) * (aver - y) * (aver - z));
}

bool cmp(double a, double b)
{
    return a > b;
}

int main()
{
    freopen("in.txt", "r", stdin);
    vector<node> ve;
    int t;
    cin >> t;
    while(t--)
    {
        int n, kk;
        cin >> n >> kk;
        node tmp;
        fei(1, n)
        {
            cin >> tmp.x >> tmp.y;
            ve.push_back(tmp);
        }

        vector<double> s;
        fei(0, n - 3)
            fej(i, n - 2)
                fek(j, n - 1)
                {
                    s.push_back(get_area(ve[i], ve[j], ve[k]));
                }
        sort(s.begin(), s.end(), cmp);
        double ans = *(s.begin() + kk - 1);
        printf("%.2lf\n", ans);
    }
    return 0;
}

