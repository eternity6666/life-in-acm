#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, l, r; cin >> n >> l >> r;
    int mi = 0;
    for(int i = 1; i <= n; i++)
        if(i<=n-l) mi+=1;
        else mi += pow(2, n-i);
    cout << mi << " ";
    int ma = 0;
    for(int i = 1; i <= n; i++)
        if(i <= r) ma += pow(2, i-1);
        else ma+=pow(2, r-1);
    cout << ma << endl;
    return 0;
}
