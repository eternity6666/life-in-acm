#include <bits/stdc++.h>
#include <limits.h> // include INT_MIN, INT_MAX
#define fadd(i, a, b) for(int (i) = a; (i) <= b; (i)++)
#define fcut(i, a, b) for(int (i) = a; (i) >= b; (i)--)
#define ll long long
#define mem(a) memset((a), 0, sizeof(a))
using namespace std;
const int inf = 0x7f7f7f7f;
const int mod = 1e9 + 7;

const int maxn = 1e6 + 5;

double get(int n)
{
    if(n == 0)
        return 1.0;
    else
    {
        int tmp = 1;
        fadd(i, 1, n)
            tmp *= i;
        return 1.0 / tmp;
    }
}

int main()
{
    freopen("in.txt", "r", stdin);
    /*
    double sum = 0;
    fadd(i, 0, 9)
    {
        cout << i << " ";
        printf("%.9lf\n",(sum += get(i)));
    }
    */
    cout << "n e\n" 
         << "- -----------\n"
         << "0 1\n"
         << "1 2\n"
         << "2 2.5\n"
         << "3 2.666666667\n"
         << "4 2.708333333\n"
         << "5 2.716666667\n"
         << "6 2.718055556\n"
         << "7 2.718253968\n"
         << "8 2.718278770\n"
         << "9 2.718281526\n";
    return 0;
}


