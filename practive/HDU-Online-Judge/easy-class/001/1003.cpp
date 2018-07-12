#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>
#include <cstring>
#include <string>
// #define usefre
using namespace std;
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    string a;
    while (cin >> a&&a!="0")
    {
        int sum;
        do
        {
            sum = 0;
            // cout<<sum<<endl;
            // cout<<a<<endl;
            for (int i = 0; i <= a.length() - 1; i++)
            {
                sum += a[i] - '0';
            }
            stringstream ss;
            ss << sum;
            ss >> a;
            // cout<<sum<<endl;
            // cout<<a<<endl;
            // cout<<endl;
        } while (sum >= 10);
        cout << sum << endl;
        // cout<<endl<<endl;
    }
}