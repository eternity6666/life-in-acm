#include <iostream>
using namespace std;

int main()
{
    int t; cin >> t;
    while(t--)
    {
        unsigned a, b, c; cin >> a >> b;
        c = (a&b);
        if(c==0&&((a^c)&(b^c))==0)
            cout << 1 << endl;
        else
            cout << c << endl;
    }
    return 0;
}
