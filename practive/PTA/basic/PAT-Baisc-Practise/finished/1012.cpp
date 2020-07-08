#include <bits/stdc++.h>
using namespace std;

// #define syfre

int main()
{
#ifdef syfre
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    vector<int> num;
    int n;
    cin >> n;
    int a1, a2, a3, a4, a5, a4_tmp;
    int tmp;
    int k[5] = {0};
    a1 = a2 = a3 = a4 = a5 = a4_tmp = 0;
    while (cin >> tmp)
    {
        num.push_back(tmp);
    }
    vector<int>::iterator it;
    for (it = num.begin(); it != num.end(); it++)
    {
        if (*it % 10 == 0)
        {
            a1 += *it;
            k[0]++;
        }
        else if (*it % 5 == 1)
        {
            a2 = -a2;
            a2 = a2 + *it;
            k[1]++;
        }
        else if (*it % 5 == 2)
        {
            a3++;
            k[2]++;
        }
        else if (*it % 5 == 3)
        {
            a4_tmp++;
            a4 += *it;
            k[3]++;
        }
        else if (*it % 5 == 4)
        {
            if (*it >> a5)
            {
                a5 = *it;
            }
            k[4]++;
        }
    }
    if (k[0] == 0)
        cout << "N";
    else
        cout << a1;
    cout << " ";
    if (k[1] == 0)
        cout << "N";
    else
        cout << a2;
    cout << " ";
    if (k[2] == 0)
        cout << "N";
    else
        cout << a3;
    cout << " ";
    if (k[3] == 0)
        cout << "N";
    else
        printf("%.1lf", 1.0*a4/a4_tmp);
    cout << " ";
    if (k[4] == 0)
        cout << "N";
    else
        cout << a5;
    return 0;
}