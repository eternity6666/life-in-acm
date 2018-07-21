#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <math.h>
#include <fstream>
#include <iomanip>
int run(int flag, int x1, int x2, int r, int l, int *ans);
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, r, ans = 0, l = 0;
    cin >> n >> r;
    while (n--)
    {
        ans = 0;
        int x1, x2;
        cin >> x1 >> x2;
        run(0, x1, x2, r, l, &ans);
        cout << ans % 1000000007 << endl;
    }
}
int run(int flag, int x1, int x2, int r, int l, int *ans)
{
    if (l >= x1 && l <= x2)
        *ans = *ans + 1;
    if (l > x2)
        return 0;
    if (flag == 0)
    {
        run(0, x1, x2, r, l + 1, ans);
        run(1, x1, x2, r, l + r, ans);
    }
    if (flag == 1)
        run(0, x1, x2, r, l + 1, ans);
    return 0;
}
