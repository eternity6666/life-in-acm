#include <iostream>
using namespace std;

int main()
{
    string a, b, c;
    cin >> a >> b;
    c = "";
    for(int i = 0; i < a.length(); i++)
        c += (a[i] == b[i] ? '0' : '1');
    cout << c << endl;
    return 0;
}

