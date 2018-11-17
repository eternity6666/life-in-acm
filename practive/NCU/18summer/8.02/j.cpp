#include <bits/stdc++.h>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long n, p2, p3;
    while (cin >> n >> p2 >> p3)
    {
        // cin >> n >> p2 >> p3;
        long cost = 0;
        double tmp2 = (double)p2 / 2;
        double tmp3 = (double)p3 / 3;
        while (n > 0)
        {
            if (n > 3)
            {
                if (tmp2 > tmp3)
                {
                    cost = cost + n / 3 * p3;
                    n = n % 3;
                }
                else
                {
                    cost = cost + n / 2 * p2;
                    n = n % 2;
                }
            }
            else if (n <= 2)
            {
                if (p2 > p3)
                {
                    cost = cost + p3;
                }
                else
                {
                    cost = cost + p2;
                }
                n = 0;
            }
        }
        cout << cost << endl;
    }
    return 0;
}