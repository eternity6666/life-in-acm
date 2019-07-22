#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    a = a * a;
    b = b * b;
    c = c * c;
    if (a + b < c || a + c < b || b + c < a)
    {
        cout << "not a triangle" << endl;
    }
    else
    {
        if ((a + b) != c && (b + c) != a && (a + c) != b)
        {
            cout << "no" << endl;
        }
        else
            cout << "yes" << endl;
    }
}