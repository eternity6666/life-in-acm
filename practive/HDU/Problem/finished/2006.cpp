#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cstring>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    while (cin >> n)
    {
        vector<int> a;
        int tmp;
        while (n-- && cin >> tmp)
            a.push_back(tmp);
        int ans = 1;
        vector<int>::iterator it;
        for (it = a.begin(); it != a.end(); it++)
        {
            if (*it % 2 == 1)
            {
                ans *= *it;
            }
        }
        cout << ans << endl;
    }
    return 0;
}