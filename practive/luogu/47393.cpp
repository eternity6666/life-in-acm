#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    while(~scanf("%d %d", &a, &b))
    {
        b = a * 10 + b;
        printf("%d", b / 19);
    }
    return 0;
}
