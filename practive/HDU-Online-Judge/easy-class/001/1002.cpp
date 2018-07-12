#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    while (n--)
    {
        int a;
        cin >> a;
        double sum = 0;
        for (int i = 1; i <= a; i++)
        {
            sum += log10((double)i);
        }
        cout << (int)sum + 1 << endl;
    }
    return 0;
}