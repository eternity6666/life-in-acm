#include <iostream>
#include <cmath>
using namespace std;
const int maxn = 2000;

char c[maxn][maxn];

int main()
{
    int t;
    cin >> t;
    c[1][1]=c[1][2]=c[2][2]='C';
    c[2][1]='P';
    int e = 2;
    for(int i = 2; i <= 10; i++)
    {
        for(int i = 1; i <= e; i++)
            for(int j = 1;j <= e; j++)
            {
                c[i][e+j]=c[e+i][e+j]=c[i][j];
                c[e+i][j]=(c[i][j]=='C'?'P':'C');
            }
        e=e*2;
    }
    while (t--)
    {
        int k;
        cin >> k;
        int tmp = pow(2,k);
        for(int i = 1; i <= tmp; i++)
            for(int j = 1; j <= tmp; j++)
                cout << c[i][j] << (j==tmp?"\n":"");
    }
    return 0;
}
