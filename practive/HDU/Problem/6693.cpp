#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
const int maxn = 1e4 + 10;

int main()
{
    int t; scanf("%d", &t);
    while(t--)
    {
        int n; scanf("%d", &n);
        float ma = 0;
        for(int i = 1; i <= n; i++)
        {
            float tmp; scanf("%f", &tmp);
            if(tmp>=ma) ma = tmp;
        }
        printf("%.11f\n", ma);
    }
    return 0;
}
