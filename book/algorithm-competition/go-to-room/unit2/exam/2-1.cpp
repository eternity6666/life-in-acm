#include <bits/stdc++.h>

using namespace std;
#define freout freopen("2-1-out.txt", "w", stdout)
int main()
{
    freout;
    int a, b, c;
    int i = 0;
    for (int a = 1; a < 9; a++)
    {
        for (int b = 0; b <= 9; b++)
        {
            for (int c = 0; c <= 9; c++)
            {
                if (a * a * a + b * b * b + c * c * c == a * 100 + b * 10 + c)
                {
                    if (i != 0)
                    {
                        cout << ' ';
                    }
                    cout << a << b << c;
                    i++;
                }
            }
        }
    }
}