#include <bits/stdc++.h>
using namespace std;

// #define usefre
int maxnum(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif
    int a, b;
    while (cin >> a >> b)
        // int shuchu;
        for (int i = maxnum(a, b); i <= a * b; i++)
        {
            if (i % a == 0 && i % b == 0)
            {
                cout << i<<endl;
                // shuchu=1;
                break;
            }
            else
                continue;
        }
}