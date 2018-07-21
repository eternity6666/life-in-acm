#include <cstdio>
#include <string>
#include <cstring>
#include <fstream>
#include <iostream>
using namespace std;
#define usefre
typedef struct
{
    char c[15];
    int count;
} balloon;

int main()
{

#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    balloon b[1000];
    int n, i, p, j, max, r;
    int isnewcolor;
    char newc[15];
    while (scanf("%d", &n))
    {
        if (n == 0)
            break;
        p = 0;
        for (i = 0; i < n; i++)
        {
            scanf("%s", newc);
            isnewcolor = 1;
            for (j = 0; j < p; j++)
                if (strcmp(newc, b[j].c) == 0)
                {
                    b[j].count++;
                    isnewcolor = 0;
                    break;
                }
            if (isnewcolor)
            {
                strcpy(b[p].c, newc);
                b[p].count = 1;
                p++;
            }
        }
        for (max = 0, r = 0, i = 0; i < p; i++)
            if (b[i].count > max)
            {
                max = b[i].count;
                r = i;
            }
        printf("%s\n", b[r].c);
    }
}
