#include <iostream>
using namespace std;
         //  0   1   2   3   4  5   6   7   8   9 
int a[10] = {0, 10,  5, 10,  5, 2,  5, 10,  5, 10};
int b[10] = {0, 45, 20, 45, 20, 5, 20, 45, 20, 45};

int main()
{
    int q; cin >> q;
    while(q--)
    {
        long long n, m, ans; cin >> n >> m;
        if(m > n || m % 10 == 0)
            cout << 0 << endl;
        else
        {
            long long tmp = n / m;
            int mm = m % 10;
            long long ans = tmp / a[mm] * b[mm];
            int mtmp = tmp % a[mm];
            for(int i = 1; i <= mtmp; i++)
                ans += i * mm % 10;
            cout << ans << endl;
        }
    }
    return 0;
}
