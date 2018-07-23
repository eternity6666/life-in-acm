#include <iostream>
#include <fstream>
using namespace std;
// #define usefre
bool isPrimeYear(int i);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    cin >> t;
    while (t--)
    {
        int y, m, d;
        scanf("%d-%d-%d", &y, &m, &d);
        if (m == 2 && d == 29)
        {
            cout << -1 << endl;
        }
        else if (m > 2)
        {
            int ans = 0;
            for (int i = 1; i <= 18; i++)
            {
                if (isPrimeYear(i + y))
                {
                    ans += 366;
                }
                else
                {
                    ans += 365;
                }
            }
            cout << ans << endl;
        }
        else
        {
            int ans = 0;
            for (int i = 0; i < 18; i++)
            {
                if (isPrimeYear(i + y))
                {
                    ans += 366;
                }
                else
                {
                    ans += 365;
                }
            }
            cout << ans << endl;
        }
    }
    return 0;
}
bool isPrimeYear(int x)
{
    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
    {
        return true;
    }
    else
        return false;
}