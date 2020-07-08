#include <iostream>
#include <vector>
using namespace std;
const int maxn = 1e5 + 10;
int n;
double p, r;
int ve[maxn];
double sz[maxn];
bool re[maxn];
double get(int i)
{
    if (sz[i] != 0)
        return sz[i];
    return sz[i] = ((1 + r * 0.01) * get(ve[i]));
}
int main()
{
    cin >> n >> p >> r;
    for (int i = 0; i < n; ++i)
    {
        int k;
        cin >> k;
        re[i] = (k == 0);
        sz[i] = 0;
        for (int j = 0; j < k; ++j)
        {
            int tmp;
            cin >> tmp;
            ve[tmp] = i;
        }
    }
    sz[0] = p;
    double ans = 1e10 + 10;
    int count = 0;

    for (int i = 0; i < n; ++i)
    {
        if (re[i])
        {
            sz[i] = get(i);
            if (ans > sz[i])
                ans = sz[i], count = 1;
            else if (ans == sz[i])
                count++;
        }
    }
    printf("%.4lf %d\n", ans, count);
    return 0;
}