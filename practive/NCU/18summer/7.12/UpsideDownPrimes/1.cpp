#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <set>
using namespace std;
bool is_prime(long long );
#define ull unsigned long long
// #define usefre
int deal(ull n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long long a_tmp,a_tmp2=0;
    string a;
    cin >> a_tmp;
    stringstream ss;
    ss<<a_tmp;
    ss>>a;
    int flag;
    if (is_prime(a_tmp))
    {
        for (int i = 0; i < a.length(); i++)
        {
            if (a[i] == '3' || a[i] == '4' || a[i] == '7')
            {
                flag = 0;
                break;
            }
            if (a.length() > 1)
            {
                if (a[i] == a[a.length() - i - 1])
                {
                    flag = 1;
                    continue;
                }
                if (a[i] == '6' && a[a.length() - i - 1] == '9')
                {
                    flag = 1;
                    continue;
                }
                if (a[i] == '9' && a[a.length() - i - 1] == '6')
                {
                    flag = 1;
                    continue;
                }
            }
            else if (a.length() == 1)
            {
                if (a[i] != '6' && a[i] != '9')
                {
                    flag = 1;
                    continue;
                }
            }
            //flag=1:is_prime(a_)
            flag = 0;
            break;
        }
    }
    else
        flag = 0;
    string ans[] = {"no", "yes"};
    cout << ans[flag] << endl;
    return 0;
}
bool is_prime(long long a)
{
    if(a==1)
    return true;
    else 
    {
        for(int i=2;i<sqrt(a);i++)
        {
            if(a%i==0)
            {
                return false;
            }
        }
        return true;
    }
}