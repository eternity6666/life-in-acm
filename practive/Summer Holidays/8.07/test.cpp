#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    while(cin >> n)
    {
        long long i = 2;
        while(n >= i)
        {
            while(n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
            /*
            if(n % i == 0)
            {
                cout << i << " ";
                n = n / i;
            }
            */
            i++;
        }
        cout << n << endl;
    }
}
