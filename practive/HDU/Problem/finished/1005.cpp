#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int A, B, n;
    while(~scanf("%d %d %d", &A, &B, &n) && (A|B|n))
    {
        int a[49];
        a[0] = a[1] = 1;
        for(int i = 2; i < 49; i++)
            a[i] = (A * a[i - 1] + B * a[i - 2]) % 7;
        printf("%d\n", a[(n - 1) % 49]);
    }
}
/*
const int mod = 7;
int A, B;
int f(long long n);
int main()
{
    long long n;
    while(~scanf("%d %d %lld", &A, &B, &n))
    {
        if(A == 0 && B == 0 && n == 0)
            break;
        cout << f(n) << endl;
    }
    return 0;
}

int f(long long n)
{
    if(n <= 2)
        return 1;
    else return (A * f(n - 1) + B * f(n - 2)) % mod;
}
*/
