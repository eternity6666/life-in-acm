#include <iostream>
using namespace std;
int main()
{
    int Num1, tmp, Num2 = 0;
    cin >> Num1;
    while(Num1 != 1)
    {
        if (Num1 % 2 == 1)
        {
            Num1 = (Num1 * 3 + 1) / 2;
        }
        else
        {
            Num1 = Num1 / 2;
        }
            Num2++;
    };
    cout << Num2;
    return 0;
}

