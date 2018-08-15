#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define lowbit(i) ((i) & (-i))
#define MOD 1000000007
// #define fre freopen("in.txt", "r", stdin)
using namespace std;
int q, k;
long long A[100007];
long long B[100007] = {0};
void gettime()
{
    for (int i = 1; i < k; i++)
    {
        A[i] = 1;
    }
    A[k] = 2;
    A[k + 1] = 3;
    for (int i = k + 2; i <= 100000; i++)
    {
        A[i] = A[i - (k + 1)] + A[i - 1];
    }
    for (int i = 1; i <= 100000; ++i)
    {
        B[i] = A[i] + B[i - 1];
    }
    /*
    for (int i = 0; i <= 100000; i++)
    {
        cout << i << "        " << A[i] << "        " << B[i] << endl;
    }
    */
}

int main()
{
    // fre;
    // freopen("out.txt", "w", stdout);
    scanf("%d%d", &q, &k);
    gettime();
    for (int i = 0, l, r; i < q; ++i)
    {
        scanf("%d%d", &l, &r);
        printf("%d\n", (int)((B[r] - B[l - 1]) % MOD));
    }
    return 0;
}
