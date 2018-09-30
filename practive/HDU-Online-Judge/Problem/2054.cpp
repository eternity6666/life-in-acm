#include <iostream>
#include <string>
using namespace std;

int main()
{
    double a, b;
   // string a, b;
    while(cin >> a >> b)
    {
        if(a == b)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
