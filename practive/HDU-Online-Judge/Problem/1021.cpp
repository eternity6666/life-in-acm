#include <iostream>
using namespace std;
const int maxn = 1000000 + 5;
long long fi[maxn];
int main()
{
    freopen("in.txt", "r", stdin);
    int fin = 2;
    int n;
    fi[0] = 7;
    fi[1] = 11;
    while(~scanf("%d", &n))
    {
        if(fin < n)
        {
            for(int i = fin; i <= n; i++)
                fi[i] = fi[i - 1] + fi[i - 2];
            fin = n;
        }
        if(fi[n] % 3 == 0)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
