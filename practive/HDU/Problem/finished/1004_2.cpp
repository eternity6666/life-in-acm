#include <bits/stdc++.h>
using namespace std;
// #define usefre
typedef struct
{
    string color;
    int count;
} ballon;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    while (cin >> n && n)
    {
        ballon b[1005];
        int num = 0;
        while (n--)
        {
            string tmp;
            cin >> tmp;
            int isNewColor = 1;
            for (int i = 0; i < num; i++)
            {
                if (tmp == b[i].color)
                {
                    b[i].count++;
                    isNewColor = 0;
                    break;
                }
            }
            if (isNewColor)
            {
                b[num].color = tmp;
                b[num].count = 1;
                num++;
            }
        }
        int p_max, max = 0;
        for (int i = 0; i < num; i++)
        {
            if (b[i].count > max)
            {
                max = b[i].count;
                p_max = i;
            }
        }
        cout << b[p_max].color << endl;
    }
    return 0;
}