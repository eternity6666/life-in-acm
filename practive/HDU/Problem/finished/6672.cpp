#include <iostream>
using namespace std;

long long got(long long n)
{
    if(n % 6 == 0)
        return n / 6 * 3;
    else if(n % 6 == 1)
        return got(n - 1) + n / 6 + 1;
    else if(n % 6 == 2)
        return got(n - 2) + 1;
    else if(n % 6 == 3)
        return n / 6;
    else if(n % 6 == 4)
        return (2*(n/6+1)-1)*3;
    else
        return n / 6;
}

int main()
{
    int t; cin >> t;
    while(t--)
    {
        long long n;
        cin >> n;
        cout << got(n) << endl;
    }
}