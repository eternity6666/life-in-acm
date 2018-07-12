#include <iostream>
#include <fstream>
// #define usefre
using namespace std;
int main()
{
#ifdef usefre
freopen("in.txt","r",stdin);
freopen("out.txt","w",stdout);
#endif
    char a, b, c;
    while (cin >> a >> b >> c)
    {
        char tmp;
        if (c < a)
        {
            tmp = a;
            a = c;
            c = tmp;
        }
        if (b < a)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (c < b)
        {
            tmp = c;
            c = b;
            b = tmp;
        }
        cout << a << " " << b << " " << c << endl;
    }
}