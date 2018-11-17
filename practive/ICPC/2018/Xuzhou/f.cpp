#include <bits/stdc++.h>
using namespace std;
int T, n;
struct node{
    int x;
    int y;
};

int main()
{
    scanf("%d", &T);
    while(T--)
    {
        scanf("%d", &n);

        for(int i = 1; i <= n; i++)
        {
            int k;
            scanf("%d", &k);
            for(int j = 1; j <= k; j++)
            {
                node tmp;
                scanf("%d %d", &tmp.x, &tmp.y);
                
            }
        }
    }
    return 0;
}
