#include <iostream>
using namespace std;
int gcd1(int a, int b);
int gcd2(int a, int b);

int main()
{
    cout << gcd1(30, 24) << endl;
    cout << gcd2(30, 24) << endl;
    return 0;
}

int gcd1(int a, int b)
{
    if(b)
        while((a %= b) && (b %= a));
    return a + b;
}

int gcd2(int a, int b)
{
    return b ? gcd2(b, a % b) : a;
}
