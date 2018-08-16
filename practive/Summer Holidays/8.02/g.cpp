#include <bits/stdc++.h>
#define usefre

using namespace std;

int main()
{
#ifdef usefre
    freopen("in.txt","r",stdin);
    freopen("out.txt","w",stdout);
#endif
    long c, n;
    int flag = 0;
    scanf("%ld %ld", &c, &n);
    long a, b;
    for(int i = n; i >= c; i--)
    {
        if( n % i == 0)
        {
            if( flag == 0)
            {
                b = i;
            }
            else if (flag == 1)
            {
                a = i;
            }
            flag++;
        }
        if(flag == 2)
        {
            break;
        }
    }
    if(flag != 2) cout << -1 << endl;
    else cout << a * b << endl;
    return 0;
}
