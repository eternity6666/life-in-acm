#include <bits/stdc++.h>
using namespace std;

int a, b, c;

int main()
{
    freopen("in.txt", "r", stdin);
    while(~scanf("%d %d %d", &a, &b, &c))
    {
        if(a * b * c % 2 == 0)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
