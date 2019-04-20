#include <bits/stdc++.h>
#define fei(a, b) for(int i = a; i <= b; i++)
#define fej(a, b) for(int j = a; j <= b; j++)
#define fek(a, b) for(int k = a; k <= b; k++)
using namespace std;
const int maxn = 100 + 5;

int main()
{
    freopen("in.txt", "r", stdin);
    long long x = 1;
    while(true)
    {
        // cout << x << ": ";
        long long sum = 0;
        for(long long i = 1; i < x; i++)
            if(x % i == 0)
                sum += i;
        if(x == sum)
            cout << x << endl;
        // cout << endl;
        x++;
    }
    return 0;
}


