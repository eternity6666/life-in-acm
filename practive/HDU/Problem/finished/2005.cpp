#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
bool is_leap(int y); //判断闰年
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int y, m, d;
    int month[] = {0,
                   31, 28, 31,
                   30, 31, 30,
                   31, 31, 30,
                   31, 30, 31};
    while (scanf("%d/%d/%d", &y, &m, &d) == 3)
    {
        // cout<<y<<endl<<m<<endl<<d<<endl;
        bool isLeap = is_leap(y);
        if (isLeap)
            month[2] = 29;
        else
            month[2] = 28;
        int ans = d;
        for (int i = 0; i < m; i++)
        {
            ans += month[i];
        }
        cout << ans << endl;
    }
    return 0;
}
bool is_leap(int y)
{
    if (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0))
        return true;
    else
        return false;
}
