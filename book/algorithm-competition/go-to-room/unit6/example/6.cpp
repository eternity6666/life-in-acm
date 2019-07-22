#include <iostream>
using namespace std;
const int maxd = 20;
int main()
{
    int D, I;
    while(scanf("%d %d", &D, &I) == 2)
    {
        bool s[1 << maxd] = {0};
        int k, n = (1 << D) - 1;
        for(int i = 0; i < I; i++)
        {
            k = 1;
            for(;;)
            {
                s[k] = !s[k];
                k = s[k] ? k * 2 : k * 2 + 1;
                if(k > n) break;
            }
        }
        cout << k / 2 << endl;
    }
}
/*
#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
const int maxd = 20;
int s[1 << maxd];
int main()
{
    int D, I;
    while(scanf("%d%d", &D, &I) == 2)
    {
        memset(s, 0, sizeof(s));
        int k, n = (1 << D) - 1;
        for(int i = 0; i < I; I++)
        {
            k = 1;
            for(;;)
            {
                s[k] = !s[k];
                k = s[k] ? k * 2 : k * 2 + 1;
                if(k > n)
                    break;
            }
        }
        cout << k / 2 << endl;
    }
    return 0;
}
*/
