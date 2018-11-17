#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long long m, n;
    while (cin >> m >> n)
    {
        if (m > n)
        {
            int tmp;
            tmp = m;
            m = n;
            n = tmp;
        }
        // cout<<m<<n<<endl;
        long long evenNum, oddNum;
        evenNum = oddNum = 0;
        for (long long i = m; i <= n; i++)
        {
            if (i % 2 == 0)
                evenNum += i * i;
            else
                oddNum += i * i * i;
        }
        cout << evenNum << " " << oddNum << endl;
    }
    return 0;
}