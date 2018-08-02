#include <bits/stdc++.h>
//#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long long n, p2, p3;
    while (cin >> n >> p2 >> p3)
    {
        // cin >> n >> p2 >> p3;
        long long cost = 0;
        double tmp2 = (double)p2 / 2;
        double tmp3 = (double)p3 / 3;
        while (n > 0)
        {
            if (n >= 6)
            {
                if (tmp2 > tmp3)
                {
                    cost = cost + n / 6 * p3 * 2;
                    n = n % 6;
                }
                else
                {
                    cost = cost + n / 6 * p2 * 3;
                    n = n % 6;
                }
            }
            else if (n == 5)
            {
                if(p3 > 2 * p2)
                {
                    cost = cost + 3 * p2;

                }
                else if (p3 < p2)
                {
                    cost = cost + 2 * p3;
                }
                else
                {
                    cost = cost + (p2 + p3);
                }
                n = 0;
            }
            else if (n == 4)
            {
                if(p2 > p3)
                {
                    cost = cost + 2 * p3;
                }
                else
                {
                    cost = cost + 2 * p2;
                }
                n = 0;
            }
            else if (n == 3)
            {
                if( 2 * p2 > p3)
                {
                    cost = cost + p3;
                }
                else
                {
                    cost = cost + p2 * 2;
                }
                n = 0;
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
