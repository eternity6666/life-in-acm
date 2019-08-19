#include <iostream>
using namespace std;
const int maxn = 2e5 + 10;

int a[maxn];
int main()
{
    int n; cin >> n;
    if(n % 2 == 1)
    {
        cout << "YES" << endl;
        for(int i = 1; i <= n; i++)
            if(i%2==0)
                a[i+n] = 2*i-1, a[i] = 2*i; 
            else
                a[i+n] = 2*i, a[i] = 2*i-1;
        for(int i = 1; i <= 2*n; i++)
            cout << a[i] << (i==2*n?"\n":" ");
    }
    else
        cout << "NO" << endl;
    return 0;
}
