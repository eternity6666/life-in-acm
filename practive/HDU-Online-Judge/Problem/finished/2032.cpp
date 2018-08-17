#include <iostream>
#include <fstream>
using namespace std;
#define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
#endif
    int n;
    while(cin >> n)
    {
        int a[40][40];
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i == j)
                {
                    a[i][j] = 1;
                    cout << a[i][j] << endl;
                    break;
                }
                else if(j == 1)
                {
                    a[i][j] = 1;
                    cout << a[i][j] << " ";
                }
                else
                {
                    a[i][j] = a[i - 1][j - 1] + a[i - 1][j]; 
                    cout << a[i][j] << " ";
                }
            }
        }
        cout << endl;
    }
    return 0;
}
