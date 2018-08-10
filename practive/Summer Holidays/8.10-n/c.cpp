#include <fstream>
#include <iostream>
using namespace std;
#include <cstdio>
const int maxn = 1000000 + 5;
int main()
{
freopen("in.txt", "r", stdin);
    int n, m;
    scanf("%d %d", &n, &m);
    int R[maxn] = {0};
    int B[maxn] = {0};
    int r, b;
    r = b = 1;
    char a;
    getchar();
    for(int i = 1; i <= n; i++)
    {
        scanf("%c", &a);
      //  cout << a << endl;
        if(a == 'R')
            R[r++] = i;
        else
            B[b++] = i;
    }
    getchar();
    for(int i = 1; i <= m; i++)
    {
        scanf("%c %d", &a, &b);
//        cout << a << b << endl;
        getchar();
        if(a == 'R')
            if(R[b] != 0)
                printf("%d\n", R[b]);
            else
                printf("-1\n");
        else 
            if(B[b] != 0)
                printf("%d\n", B[b]);
            else
                printf("-1\n");
    }
    return 0;
}
