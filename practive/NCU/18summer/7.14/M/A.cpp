#include <iostream>
#include <fstream>
#include <cmath>
#include <vector>
#include <algorithm>
using namespace std;
// #define usefre
bool CompJ(const int &a, const int &b);
// void JC(vector<int> a);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int n, q, k;
    cin >> n >> q >> k;
    vector<int> aa;
    int tmp1;
    while (n-- && cin >> tmp1)
    {
        aa.push_back(tmp1);
    }
    // JC(aa);
    int a, b, t;
    while (cin >> a >> b >> t)
    {
        // cout << a << " " << b << " " << t << endl;
        vector<int>::iterator it;
        if (t == 1)
        {
            sort(aa.begin() + a - 1, aa.begin() + b, CompJ);
        }
        if (t == 0)
        {
            sort(aa.begin() + a - 1, aa.begin() + b);
        }
        // JC(aa);
    }
    vector<int>::iterator it;
    it = aa.begin() + k - 1;
    cout << *it << endl;
    return 0;
}
/*
void JC(vector<int> a)
{
    vector<int>::iterator it;
    for (it = a.begin(); it != a.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
*/
bool CompJ(const int &a, const int &b)
{
    if (a != b)
        return a > b;
    else
        return a > b;
}

bool CompS(const int &a, const int &b)
{
    if (a != b)
        return a < b;
    else
        return a < b;
}