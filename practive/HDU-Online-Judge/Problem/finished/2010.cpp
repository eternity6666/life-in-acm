#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
void deal(int a, int b);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int a, b;
    while (cin >> a >> b)
    {
        deal(a, b);
    }
    return 0;
}

int third(int a)
{
    return a * a * a;
}
void deal(int a, int b)
{
    int k = 0;
    int gw, sw, bw;
    for (int i = a; i <= b; i++)
    {
        gw = i % 10;
        sw = i / 10 % 10;
        bw = i / 100;
        if ((third(gw) + third(sw) + third(bw)) == i)
        {
            if (k != 0)
            {
                cout << " ";
            }
            cout << i;
            k++;
        }
    }
    if (k == 0)
    {
        cout << "no";
    }
    cout << endl;
}