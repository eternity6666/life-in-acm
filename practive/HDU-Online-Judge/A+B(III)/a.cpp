#include <iostream>
#include <fstream>
using namespace std;

// #define usefre

int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif

    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
            break;
        cout << a + b << endl;
    }
    return 0;
}