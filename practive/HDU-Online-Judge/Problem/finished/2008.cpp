#include <iostream>
#include <cmath>
#include <fstream>
#include <vector>
using namespace std;
// #define usefre
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n;
    while (cin >> n && n)
    {
        vector<double> a;
        double tmp;
        while (n-- && cin >> tmp)
        {
            a.push_back(tmp);
        }
        //negative:<0,zero:=0,positive:>0
        int negative, zero, positive;
        negative = zero = positive = 0;
        vector<double>::iterator it;
        for (it = a.begin(); it != a.end(); it++)
        {
            if (*it > 0)
                positive++;
            else if (*it == 0)
                zero++;
            else
                negative++;
        }
        cout << negative << " " << zero << " " << positive << endl;
    }
    return 0;
}