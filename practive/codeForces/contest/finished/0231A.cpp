#include <iostream>
using namespace std;
const int maxn = 1e3 + 10;

int g[maxn][maxn];

int main()
{
    int n;
    cin >> n;
    int count = 0;
    while(n--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if(a+b+c>1)
            count++;
    }
    cout << count <<endl;
    return 0;
}