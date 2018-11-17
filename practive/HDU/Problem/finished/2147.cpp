#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    while(~scanf("%d %d", &n, &m))
    {
        if(n == 0 && m == 0)
            break;
        if(n * m % 2)
            cout << "What a pity!" << endl;
        else
            cout << "Wonderful!" << endl;
    }
    return 0;
}
