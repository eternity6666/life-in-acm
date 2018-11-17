#include <iostream>
#include <cmath>
#include <string>
#include <cstring>
#include <fstream>
using namespace std;
// #define usefre
bool panDuan(int);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int x, y;
    while (cin >> x >> y && (x != 0 || y != 0))
    {
        int flag = 0;
        string ans = "";
        for (int i = x; i <= y; i++)
        {
            if (!panDuan(i))
            {
                ans = "Sorry";
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            ans = "OK";
        }
        cout << ans << endl;
    }
    return 0;
}
bool panDuan(int a)
{
    int a_tmp = a * a + a + 41;
    int flag = 1;
    for (int i = 2; i < sqrt(a_tmp); i++)
    {
        if (a_tmp % i == 0)
        {
            flag = 0;
        }
    }
    if (flag == 0)
    {
        return false;
    }
    else
        return true;
}