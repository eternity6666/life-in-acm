#include <iostream>
using namespace std;
int gcd(int a, int b);
int main()
{
    long long n;
    while(~scanf("%lld", &n))
    {
        int a, b;
        cin >> a;
        n--;
        while(n--)
        {
            cin >> b;
            a = a * b / gcd(a, b);
        }
        cout << a << endl;
    }
    return 0;
}

int gcd(int a, int b)
{
    //return b == 0?a:gcd(a%b, a)
}
