#include <iostream>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long long n;
    while (cin >> n)
    {
        long long ans = 1;
        long long tmp;
        while (n--)
        {
            cin >> tmp;
            if (tmp % 2 == 0)
            {
                continue;
            }
            else
            {
                ans *= tmp;
            }
        }
        cout << ans << endl;
    }
    return 0;
}