#include <iostream>
using namespace std;
long long gcd(long long a, long long b);
int main()
{
    long long n;
    while(~scanf("%lld", &n))
    {
        long long a, b;
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

long long gcd(long long a, long long b)
{
    while(b > 0)
    {
        long long t = a % b;
        a = b;
        b = t;
    }
    return a;
}
