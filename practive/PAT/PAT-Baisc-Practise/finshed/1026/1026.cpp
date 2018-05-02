#include <bits/stdc++.h>
using namespace std;

// #define usefre

void deal(double t);
int main()
{
#ifdef usefre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    int c1, c2;
    cin >> c1 >> c2;
    double use_time = (double)(c2 - c1) / 100;
    deal(use_time);
    return 0;
}

void deal(double t)
{
    int tmp = floor(t + 0.5);
    int hh;
    int mm;
    int ss;
    hh = (int)tmp / 3600;
    mm = (int)tmp / 60 % 60;
    ss = (int)tmp % 60;
    if (hh == 0 || hh / 10 == 0)
        cout << 0;
    cout << hh;
    cout << ":";
    if (mm == 0 || mm / 10 == 0)
        cout << 0;
    cout << mm;
    cout << ":";
    if (ss == 0 || ss / 10 == 0)
        cout << 0;
    cout << ss;
}