#include <iostream>
using namespace std;

void jishuan(int a, int b);
int main()
{
    int a, b;
    cin >> a >> b;
    jishuan(a, b);

    return 0;
}

void jishuan(int a, int b)
{
    if (b % 2 == 1)
        cout << "No answer" << endl;
    else
    {
        int j, t;
        t = b / 2 - a;
        j = a - t;
        if (t > 0 && j > 0)
        {

            cout << j << " " << t << endl;
        }
        else
            cout << "No answer" << endl;
    }
}
