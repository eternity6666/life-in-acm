#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int t;
    while (scanf("%d", &t) == 1)
    {
        if (t > 100 || t < 0)
        {
            cout << "Score is error!" << endl;
        }
        else
        {
            int ans_tmp;
            char ans[] = {'E', 'D', 'C', 'B', 'A'};
            int tmp = t / 10;
            switch (tmp)
            {
            case 10:
            case 9:
                ans_tmp = 4;
                break;
            case 8:
                ans_tmp = 3;
                break;
            case 7:
                ans_tmp = 2;
                break;
            case 6:
                ans_tmp = 1;
                break;
            default:
                ans_tmp = 0;
                break;
            }
            cout << ans[ans_tmp] << endl;
        }
    }
    return 0;
}