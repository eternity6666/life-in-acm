#include <iostream>
#include <sstream>
#include <string.h>
#include <cstring>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("./in.txt", "r", stdin);
    freopen("./out.txt", "w", stdout);
#endif

    long long a, b;
    // while (cin >> a >> b)
    // {
    cin >> a >> b;
    long long ans;
    ans = a + b;
    string ans_tmp;
    stringstream ss;
    ss << ans;
    ss >> ans_tmp;
    int aL = ans_tmp.length();
    //output
    int tmp; //得到多余的数位
    int k = 3;
    if (ans < 0)
    {
        tmp = (aL - 1) % 3;
        cout << ans_tmp[0];
        for (int i = 1; i < aL; i++)
        {
            if (i < tmp || tmp == aL - 1)
                cout << ans_tmp[i];
            else if (i == tmp && tmp != aL - 1)
                cout << ans_tmp[i] << ',';
            else
            {
                if (--k || i == aL - 1)
                    cout << ans_tmp[i];
                else
                    cout << ans_tmp[i] << ',';
            }
        }
    }
    else
    {
        tmp = aL % 3;
        for (int i = 0; i < aL; i++)
        {
            if (i < tmp - 1 || i == aL - 1)
                cout << ans_tmp[i];
            else if (i == tmp - 1)
                cout << ans_tmp[i] << ',';
            else
            {
                if (--k || i == aL - 1)
                    cout << ans_tmp[i];
                else
                    cout << ans_tmp[i] << ',';
            }
        }
    }
    cout << endl;
    // }
    return 0;
}