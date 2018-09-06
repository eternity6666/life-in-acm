#include <iostream>
using namespace std;
int main()
{
    int n;
    while(~scanf("%d", &n) && n)
    {
        long long m = 1, a1, a2, a3;
        a1 = a2 = a3 = 0;
        for(int i = 1; i < n; i++)
        {
            m = m + a3;
            a3 = a2;
            a2 = a1;
            a1 = m;
        }
        cout << m + a1 + a2 + a3 << endl;
        /*
        long long m, a1, a2, a3, a4;
        m = 1;
        a1 = a2 = a3 = a4 = 0;
        for(int i = 1; i < n; i++)
        {
            int tmp = m;
            m = m + a3;
            a3 = a2;
            a2 = a1;
            a1= tmp;
        }
        cout << m + a1 + a2 + a3 + a4 << endl;
        */
    }
    return 0;
}
