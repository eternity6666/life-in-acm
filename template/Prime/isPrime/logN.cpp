#include <iostream>
using namespace std;

bool test(int n, int a, int d)
{
    if(n == 2) return true;
    if(n == a) return true;
    if((n & 1) == 0) return false;
    while(!(d & 1)) d = d >> 1;
    int t = pow_mod(a, d, n);
    while((d != n - 1) && (t != 1) && (t != n - 1)) {
        t = (long long)t * t % n;
        d = d << 1;
    }
}

bool isPrime(int n) 
{
    if(n < 2) return false;
    int a[] = {2, 3, 61};
    for(int i = 0; i <= 2; i++)
        if(!test(n, a[i], n - 1))
            return false;
    return true;
}

int main()
{

}

