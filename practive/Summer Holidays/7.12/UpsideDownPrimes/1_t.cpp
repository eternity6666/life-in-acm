#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <set>
using namespace std;
bool is_prime(long long);
bool no347(string);
#define ull unsigned long long
#define usefre
int deal(ull n);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    long long a, b;
    cin >> a;
    int flag = 0;
    string a_tmp;
    string b_tmp="";
    stringstream ss;
    ss << a;
    ss >> a_tmp;
    if (is_prime(a))
    {
        //diandao
        if (no347(a_tmp))
        {
            b = 0;
            /*
            for (int i = a_tmp.length() - 1; i >= 0; i++)
            {
                if (a_tmp[i] == '6')
                {
                    b_tmp = b_tmp + '9';
                }
                else if (a_tmp[i] == '9')
                {
                    b_tmp = b_tmp + '6';
                }
                else
                {
                    b_tmp = b_tmp + a_tmp[i];
                }
            }
            b_tmp=b_tmp+"\0";
            ss << b_tmp;
            ss >> b;
            */
            for (int i = a_tmp.length() - 1; i >= 0; i++)
            {
                if (a_tmp[i] == '6')
                {
                    b = b * 10 + 9;
                }
                else if (a_tmp[i] == '9')
                {
                    b = b * 10 + 6;
                }
                else
                {
                    b = b * 10 + (a_tmp[i] - '0');
                }
            }
            if (is_prime(b))
            {
                flag = 1;
            }
            else
                flag = 0;
        }
        else
        {
            flag = 0;
        }
    }
    else
    {
        flag = 0;
    }
    string ans[] = {"no", "yes"};
    cout << ans[flag] << endl;
    return 0;
}
bool is_prime(long long a)
{
    if (a == 1)
        return true;
    else
    {
        for (int i = 2; i < sqrt(a); i++)
        {
            if (a % i == 0)
            {
                return false;
            }
        }
        return true;
    }
}
bool no347(string a_tmp)
{
    for (int i = 0; i < a_tmp.length(); i++)
    {
        if (a_tmp[i] == '3' || a_tmp[i] == '4' || a_tmp[i] == '7')
        {
            return false;
        }
    }
    return true;
}