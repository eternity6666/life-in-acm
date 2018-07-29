#include <iostream>
#include <fstream>
#define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    unsigned long long a, b;
    cin >> n;
    int i = 0;
    while (n-- && cin >> a >> b)
    {
        if (i)
            cout << endl;
        cout << "Case " << ++i << ":\n";
        cout << a << " + " << b << " = " << a + b << endl;
    }
    return 0;
}