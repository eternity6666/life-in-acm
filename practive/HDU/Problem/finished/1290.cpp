#include <iostream>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n))
    {
        cout << (n * n * n + 5 * n) / 6 + 1 << endl;
    }
    return 0;
}
/*
#include <iostream>
#include <cstdio>
using namespace std;
const int maxn = 1000 + 5;
long long a2[maxn], a3[maxn];
int main()
{
    a2[0] = a3[0] = 1;
    for(int i = 1; i <= 1000; i++)
    {
        a2[i] = a2[i - 1] + i;
        a3[i] = a3[i - 1] + a2[i - 1];
    }
    int n;
    while(scanf("%d", &n))
    {
        cout << a3[n] << endl;
    }
    return 0;
}
*/
